# jpackage

## Links

- [A Guide to jpackage in Java](https://www.baeldung.com/java14-jpackage)

## What is jpackage?

==**jpackage is a command-line tool to create native installers and packages for Java applications.**==

It’s an incubating feature under the jdk.incubator.jpackage module. In other words, the tool’s command-line options or application layout aren’t yet stable. Once stable, the Java SE Platform or the JDK will include this feature in an LTE release.

## Main Cmd

```sh
jpackage --input target/ \
  --name JPackageDemoApp \
  --main-jar JPackageDemoApp.jar \
  --main-class com.baeldung.java14.jpackagedemoapp.JPackageDemoApp \
  --type dmg \
  --java-options '--enable-preview'
```
