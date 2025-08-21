# Maven Guide

- Maven is a powerful **project management** and **build automation tool** primarily used for Java projects, but it also supports other languages like C#, Ruby, and Scala.
- It simplifies the build process, handles dependencies, and provides a standardized way to manage projects.
- Maven uses a **project object model (POM)** to define project structure, dependencies, and build configurations.

## POM.xml

- A **P**roject **O**bject **M**odel or **POM** is the fundamental unit of work in Maven.
- An **XML file** that contains information about the project and configuration details used by Maven to build the project.
- When executing a _task or goal_, Maven looks for the POM in the current directory. It reads the POM, gets the needed configuration information, then executes the goal.
- Some of the configuration that can be specified in the POM are the project **dependencies**, **the plugins** or goals that can be executed, the **build profiles**, and so on. Other information such as the **project version**, **description**, **developers**, **mailing lists** and such can also be specified.

### Minimal POM

```xml
<project>
  <modelVersion>4.0.0</modelVersion>
  <groupId>com.mycompany.app</groupId>
  <artifactId>my-app</artifactId>
  <version>1</version>
</project>
```

- `project` - root
- `modelVersion` - should be set to 4.0.0
- `groupId` - the id of the project's group.
- `artifactId` - the id of the artifact (project)
- `version` - the version of the artifact under the specified group

> Therefore when Maven sees the dependencies in the minimal POM, it would know that these dependencies will be downloaded from <https://repo.maven.apache.org/maven2> which was specified in the Super POM.

### Project Interpolation and Variables

- Maven allows you to use both your **own** and **pre-defined variables** in the POM.
- Any field of the model that is a _single value element_ **can be referenced as a variable**. For example, `${project.groupId}`, `${project.version}`, `${project.build.sourceDirectory}` and so on.
- **Special Variables:**

  | Property                | Description                                                                                |
  | ----------------------- | ------------------------------------------------------------------------------------------ |
  | `project.basedir`       | The directory that the current project resides in.                                         |
  | `project.baseUri`       | The directory that the current project resides in, represented as a URI. Since Maven 2.1.0 |
  | `maven.build.timestamp` | The timestamp that denotes the start of the build (UTC). Since Maven 2.1.0-M1              |

- **Properties:**
  You are also able to reference any properties defined in the project as a variable. Consider the following example:

  ```xml
  <project>
    ...
    <properties>
      <mavenVersion>3.0</mavenVersion>
    </properties>
    <dependencies>
      <dependency>
        <groupId>org.apache.maven</groupId>
        <artifactId>maven-artifact</artifactId>
        <version>${mavenVersion}</version>
      </dependency>
      <dependency>
        <groupId>org.apache.maven</groupId>
        <artifactId>maven-core</artifactId>
        <version>${mavenVersion}</version>
      </dependency>
    </dependencies>
    ...
    </project>
  ```

## Create a Maven module (Aggregation Method)

1. **Ensure Parent Project Configuration:**
   The parent project's `pom.xml` file must have its `<packaging>` element set to pom. This designates it as a parent project for managing other modules.
2. Create the New Module (with Maven Archetype):

```bash
#! Make sure that you in the project root directory
mvn archetype:generate -DgroupId=com.example -Dartifa # Or use https://raw.githubusercontent.com/ZouariOmar/Cpkg/refs/heads/main/scripts/java/run
```

3. **Add Module to Parent pom.xml:**
   In the **parent project's pom.xml**, add a `<module>` entry within the `<modules>` section, specifying the name of the newly created module's directory.

```xml
<modules>
  <module>my-module</module>
</modules>
```

4. **Configure Module's pom.xml:**
   In the **new module's pom.xml**, add a `<parent>` tag to link it to the parent project. This allows the module to inherit configurations and dependencies from the parent.

```xml
<parent>
  <groupId>com.example</groupId>
  <artifactId>parent-project</artifactId>
  <version>1.0.0-SNAPSHOT</version>
</parent>
<artifactId>my-module</artifactId>
```

5. **Build the Project:**

- Navigate to the parent project's root directory in your terminal.
- Run `mvn clean install` to build the entire multi-module project, including the new module.

## Maven && Nvim

- We need to generate `.classpath` and `.project` file to make **Java language server** (usually jdtls) read it.
- The best solution is to install **Maven Eclipse plugin**
  - Setting it up (pom.xml):

    ```xml
    ...
    <build>
      <plugins>
        <plugin>
          <groupId>org.apache.maven.plugins</groupId>
          <artifactId>maven-eclipse-plugin</artifactId>
          <version>2.10</version>
          <configuration>
            <downloadSources>true</downloadSources>
            <downloadJavadocs>true</downloadJavadocs>
            <!-- If you want to specify other settings -->
          </configuration>
        </plugin>
      </plugins>
    </build>
    ...
    ```

  - Then run:

    ```bash
    mvn eclipse:eclipse
    ```

### Dependency Management

- `<dependencyManagement>` is a special section in Maven used to declare dependency versions and scopes **in one place**, usually in a **parent POM** of a multi-module project.
- Dependencies declared inside `<dependencyManagement>` are NOT automatically added to your project.
- You must still declare them separately in the `<dependencies>` section to actually use them.
- When Should You Use <dependencyManagement>?
  - You have a multi-module Maven project, and you want all modules to use the same version of a dependency.
  - You’re creating a parent POM to manage versions for consistency.

| Section                  | Purpose                                                | Required for usage?     |
| ------------------------ | ------------------------------------------------------ | ----------------------- |
| `<dependencyManagement>` | Sets default versions for child projects/modules       | ❌ Not enough by itself |
| `<dependencies>`         | Actually adds the dependency to your project/classpath | ✅ Always needed        |

> Same logic for `<pluginManagement>` and `<plugins>`
