# Setting Up Oracle Database with Docker and Connecting via C++

This guide provides instructions to set up Oracle Database locally using Docker, troubleshoot common issues like credential storage, and connect it to a C++ application.

---

## **1. Installing Oracle Database Express Edition (XE) with Docker**

### **Step 1: Install Docker**

Ensure Docker is installed on your system. On Arch Linux:

```bash
sudo pacman -S docker
```

Enable and start the Docker service:

```bash
sudo systemctl enable docker
sudo systemctl start docker
```

### **Step 2: Login to Oracle Container Registry**

Run the following command:

```bash
docker login container-registry.oracle.com
```

- **Username**: Your Oracle account email (e.g., `zouariomar20@gmail.com`)
- **Password**: Your Oracle account password

#### **Error: `pass not initialized`**

If you encounter this error:

```bash
Error saving credentials: error storing credentials - err: exit status 1, out: `pass not initialized`
```

Follow the troubleshooting steps in the "Fixing Credential Storage Issues" section below.

### **Step 3: Pull and Run Oracle XE**

1. Pull the Docker image:

   ```bash
   docker pull container-registry.oracle.com/database/express:latest
   ```

2. Run the container:
   ```bash
   docker run -d -p 1521:1521 -p 5500:5500 --name oracle-xe \
   -e ORACLE_PWD=your_password \
   container-registry.oracle.com/database/express:latest
   ```

---

## **2. Fixing Credential Storage Issues**

### **Option 1: Initialize `pass`**

1. Install `pass`:

   ```bash
   sudo pacman -S pass
   ```

2. Generate a GPG key:

   ```bash
   gpg --full-generate-key
   ```

   - Select "RSA and RSA."
   - Use at least 2048 bits for the key size.
   - Provide your name and email.
   - Note the GPG key ID (e.g., `ABCDEF1234567890`).

3. Initialize `pass` with the GPG key:

   ```bash
   pass init ABCDEF1234567890
   ```

4. Retry logging into the Oracle container registry:
   ```bash
   docker login container-registry.oracle.com
   ```

### **Option 2: Disable `credsStore`**

1. Open Docker's configuration file:

   ```bash
   nano ~/.docker/config.json
   ```

2. Remove the `credsStore` line or set it to null. The file should look like this:

   ```json
   {
     "auths": {
       "container-registry.oracle.com": {}
     }
   }
   ```

3. Save the file and retry logging in:
   ```bash
   docker login container-registry.oracle.com
   ```

### **Option 3: Use `--password-stdin`**

Skip credential storage entirely by running:

```bash
echo "yourpassword" | docker login container-registry.oracle.com -u "zouariomar20@gmail.com" --password-stdin
```

---

## **3. Connecting C++ Application to Oracle Database**

### **Step 1: Install Oracle Instant Client**

1. Download the Oracle Instant Client from [Oracle's website](https://www.oracle.com/database/technologies/instant-client.html).
2. Extract and install the client on your system.

### **Step 2: Install the Oracle C++ OCI Library**

1. Include Oracle's C++ libraries in your application:

   - Header files like `oci.h`.
   - Link against the Instant Client libraries (e.g., `-lclntsh`).

2. Install the library dependencies:
   ```bash
   sudo pacman -S libaio
   ```

### **Step 3: Connect to the Database**

Example connection string in C++:

```cpp
#include <oci.h>
#include <iostream>

int main() {
    OCIEnv *env;
    OCIError *err;
    OCISvcCtx *svc;

    OCIEnvCreate(&env, OCI_THREADED | OCI_OBJECT, nullptr, nullptr, nullptr, nullptr, 0, nullptr);
    OCIHandleAlloc(env, (void **)&err, OCI_HTYPE_ERROR, 0, nullptr);
    OCILogon(env, err, &svc, (OraText *)"username", strlen("username"), (OraText *)"password", strlen("password"), (OraText *)"localhost/XEPDB1", strlen("localhost/XEPDB1"));

    std::cout << "Connected to Oracle Database!" << std::endl;

    OCILogoff(svc, err);
    OCIHandleFree(env, OCI_HTYPE_ENV);

    return 0;
}
```

### **Step 4: Compile Your Application**

Compile with the Instant Client libraries:

```bash
g++ -o app app.cpp -I/path/to/instant/client/include -L/path/to/instant/client/lib -lclntsh
```

---

## **4. Exiting Docker and Logging Out**

### **Stop and Remove the Container**

To stop the running container:

```bash
docker stop oracle-xe
```

To remove the container:

```bash
docker rm oracle-xe
```

### **Log Out from Oracle Container Registry**

```bash
docker logout container-registry.oracle.com
```

---

## **5. Common Issues**

### **Error: `pass not initialized`**

- Initialize `pass` (see "Option 1" in the credential storage section).

### **Error: Cannot Connect to Database**

- Ensure the database is running:
  ```bash
  docker ps
  ```
- Verify connection details (username, password, and service name).
- Check network settings (e.g., `localhost:1521` is accessible).

## **Stop all proccess**
- docker stop oracle-db           # Stop the container
- docker rm oracle-db             # Remove the container
- docker rmi myusername/oracle-db:latest  # (Optional) Remove the image
- docker container prune          # (Optional) Remove all stopped containers
- docker system prune -a          # (Optional) Clean up unused Docker resources
- sudo docker logs oracle-db      # ORACLE PASSWORD FOR SYS AND SYSTEM: <random_password>
---

By following these steps, you can set up Oracle Database with Docker, resolve credential storage issues, and connect your C++ application to the database.
