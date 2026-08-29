# Assignment 67 - Logic Building

This assignment focuses on advanced file handling, textual data analysis, and network-based client-server file operations in Java using Socket Programming.

## Objective
The main objective of this assignment is to:
* Implement advanced file manipulation and listing operations
* Build sequential logic to search and analyze files
* Understand Java Networking using `ServerSocket` and `Socket`
* Implement client-server communication to check and process files remotely
* Handle multithreading or multiple connection endpoints gracefully
* Structure reliable, modular logic across distributed execution environments

## Concepts Practiced
* Advanced File Handling (`File` class)
* Text Analysis (Counting Characters, Words, and Lines)
* Java Network Programming (Sockets)
* Client-Server Architecture
* Stream Communication (`BufferedReader`, `PrintWriter`, `InputStreamReader`)
* Remote Input/Output management
* Exception Handling in Network Streams

---

## Problems Covered & Approach

### Q1 — Directory Listing
* **Description:** Lists all files and directories inside a user-specified path along with their memory sizes.
* **Approach:** Accepts the directory path, checks validity using `isDirectory()`, loops through items using `listFiles()`, and formats the outputs to print names alongside `length()` properties.

### Q2 — Search File
* **Description:** Searches for a specific file inside a targeted directory structure.
* **Approach:** Scans file arrays within the target folder using pattern matching or direct string evaluation on `getName()` to check for matches, reporting success or failure instantly.

### Q3 — File Analysis
* **Description:** Analyzes a plain text file's exact context to provide specific tracking metadata.
* **Approach:** Reads file data line-by-line using a file pointer stream, tracking newline records, splitting words by spaces/delimiters, and aggregating total character strings.

### Q4 — File Exists (Server / Client)
* **Description:** A network program verifying if a requested file is hosted remotely on the server.
* **Approach:** The client establishes a connection on **Port 7070** and sends a filename string. The server looks inside its local `ServerData` folder and transmits a boolean confirmation back.

### Q5 — File Info (Server / Client)
* **Description:** A network program pulling deep file metadata securely from a remote machine.
* **Approach:** The client connects over **Port 6060** passing a filename constraint. The server verifies the file locally, then packages metadata values (Size, Read/Write state, Permissions) into an output stream back to the client.

---

## Repository Structure

```text
Assignment-67/
│
├── ServerData/               # Folder containing test files for Q4 & Q5
│
├── Q1_DirectoryListing.java
├── Q2_SearchFile.java
├── Q3_FileAnalysis.java
├── Q4_FileExistsServer.java
├── Q4_FileExistsClient.java
├── Q5_FileInfoServer.java
└── Q5_FileInfoClient.java
```

---

## How to Run

> ⚠️ **Important Node for Q4 & Q5:** Ensure that you create a folder named `ServerData/` containing dummy/test text files relative to your server program paths before establishing connections. Always start the **Server** terminal before launching the **Client**.

### Q1 — Directory Listing
```bash
javac Q1_DirectoryListing.java
java Q1_DirectoryListing
```

### Q2 — Search File
```bash
javac Q2_SearchFile.java
java Q2_SearchFile
```

### Q3 — File Analysis
```bash
javac Q3_FileAnalysis.java
java Q3_FileAnalysis
```

### Q4 — File Exists (Port: 7070)
```bash
# Terminal 1 (Server Execution)
javac Q4_FileExistsServer.java
java Q4_FileExistsServer

# Terminal 2 (Client Execution)
javac Q4_FileExistsClient.java
java Q4_FileExistsClient
```

### Q5 — File Info (Port: 6060)
```bash
# Terminal 1 (Server Execution)
javac Q5_FileInfoServer.java
java Q5_FileInfoServer

# Terminal 2 (Client Execution)
javac Q5_FileInfoClient.java
java Q5_FileInfoClient
```

---

## Technologies Used
* **Language:** Java 
* **Core Modules:** File Handling (`java.io.File`), Socket Programming (`java.net.*`)
* **Framework Design:** Multithreading & Networking Stream Architectures
* **Environment Tools:** Visual Studio Code, Git & GitHub

---
**Author:**

Atharv Tushar Bhosale
