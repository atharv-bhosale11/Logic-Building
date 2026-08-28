# Assignment 65 - Logic Building

This assignment focuses on client-server application development and file handling in Java using Socket Programming, Multithreading, and the File class. The programs are designed to perform string operations, retrieve server information, and handle file creation through client-server architecture and standalone programs.

## 🎯 Objective
The main objective of this assignment is to:
* Understand and implement client-server architecture in Java
* Perform string operations remotely using socket programming
* Retrieve server information using built-in Java classes
* Handle multiple clients simultaneously using multithreading
* Parse and process commands received from the client
* Send results back to the client
* Create files on the local machine using the `File` class
* Handle invalid commands and edge cases gracefully
* Divide program logic into separate handler methods

## 🧠 Concepts Practiced
* Socket Programming
* Client-Server Architecture
* Multithreading
* `ServerSocket` and `Socket`
* `BufferedReader` and `PrintWriter`
* `Thread` Class and `run()` method
* Command Parsing using `split()`
* String Operations
* `LocalDate` and `LocalTime`
* `DateTimeFormatter`
* `InetAddress`
* File Handling
* `File` Class
* `createNewFile()` method
* Exception Handling
* Conditional Statements
* User Defined Methods
* Logic Building

## 🛠️ Approach

### Q1 — String Operations Server
The server handles string operations by:
1. Running continuously on port `9090`.
2. Accepting incoming client connections.
3. Creating a new thread for each connected client.
4. Reading the command sent by the client.
5. Splitting the command into operation and string using `split(" ", 2)`.
6. Performing the required string operation using separate methods.
7. Sending the result back to the client.
8. Handling invalid commands properly.

### Q2 — Server Info Application
The server handles info commands by:
1. Running continuously on port `8080`.
2. Accepting incoming client connections.
3. Creating a new thread for each connected client.
4. Using `LocalDate` and `LocalTime` for date and time retrieval.
5. Using `InetAddress` to get the server name/hostname.
6. Displaying all supported commands when receiving the `HELP` command.
7. Disconnects only the current client on `QUIT` without stopping the server.

### Q3 — File Creation Program
The standalone program handles file creation by:
1. Accepting a filename from the user via console input.
2. Creating a `File` object using the filename.
3. Displaying the file name and its absolute path.
4. Checking if the file already exists using the `exists()` method.
5. Creating the file using `createNewFile()` if it does not already exist.
6. Displaying an appropriate success or failure message.

---

## 📂 Repository Structure

```text
Assignment-65/
│
├── Q1_StringServer.java
├── Q1_StringClient.java
├── Q2_InfoServer.java
├── Q2_InfoClient.java
├── Q3_CreateFile.java
└── README.md
```

---

## 💻 Supported Commands

### Q1 — String Server (Port: 9090)

| Command | Description |
| :--- | :--- |
| `LENGTH <string>` | Returns the length of the string |
| `UPPER <string>` | Converts the string to uppercase |
| `LOWER <string>` | Converts the string to lowercase |
| `REVERSE <string>` | Reverses the characters of the string |
| `PALINDROME <string>` | Checks if the string is a palindrome |
| `VOWELS <string>` | Counts the number of vowels in the string |
| `QUIT` | Disconnects the current client |

### Q2 — Info Server (Port: 8080)

| Command | Description |
| :--- | :--- |
| `DATE` | Returns the current date |
| `TIME` | Returns the current time |
| `SERVERNAME` | Returns the server hostname |
| `HELP` | Displays all available commands |
| `QUIT` | Disconnects the current client |

---

## 🚀 How to Run

> ⚠️ **Important:** For Q1 and Q2, always start the Server terminal first before running the Client terminal!

### Q1 — String Operations Server
1. **Compile:**
   ```bash
   javac Q1_StringServer.java Q1_StringClient.java
   ```
2. **Terminal 1 (Server):**
   ```bash
   java Q1_StringServer
   ```
3. **Terminal 2 (Client):**
   ```bash
   java Q1_StringClient
   ```

### Q2 — Server Info Application
1. **Compile:**
   ```bash
   javac Q2_InfoServer.java Q2_InfoClient.java
   ```
2. **Terminal 1 (Server):**
   ```bash
   java Q2_InfoServer
   ```
3. **Terminal 2 (Client):**
   ```bash
   java Q2_InfoClient
   ```

### Q3 — File Creation Program
1. **Compile:**
   ```bash
   javac Q3_CreateFile.java
   ```
2. **Run:**
   ```bash
   java Q3_CreateFile
   ```

---

## 📊 Sample Output

### Q1 (String Server)
```text
Enter command : REVERSE Marvellous
Server : suollevraM

Enter command : VOWELS Marvellous
Server : Number of vowels : 4

Enter command : PALINDROME madam
Server : madam is Palindrome
```

### Q2 (Info Server)
```text
Enter command : DATE
Server : 27-08-2026

Enter command : TIME
Server : 14:35:22

Enter command : HELP
Available Commands:
DATE
TIME
SERVERNAME
HELP
QUIT
```

### Q3 (File Creation)
```text
Enter file name :
Demo.txt

File Name      : Demo.txt
Absolute Path  : C:\Users\Ishwari Surve\Demo.txt
Demo.txt created successfully
```

---

## 📈 Learning Outcomes
After completing this assignment, I improved my ability to:
* Understand and implement client-server architecture in Java.
* Use `ServerSocket` and `Socket` classes for network communication.
* Handle multiple clients simultaneously using multithreading.
* Perform string operations remotely on the server side.
* Use `LocalDate` and `LocalTime` to get current date and time.
* Format date and time layouts using `DateTimeFormatter`.
* Retrieve server hostname configurations using `InetAddress`.
* Display all supported commands dynamically using the `HELP` command.
* Disconnect individual clients using the `QUIT` command without shutting down the server.
* Create files on the local machine using the Java `File` class.
* Check file existence states using the `exists()` method.
* Create new files on disk using the `createNewFile()` method.
* Display file metadata like file name and absolute path layout.
* Handle input/output exceptions cleanly using `try-catch` blocks.
* Write clean, structured Java programs using decoupled handler methods.

## ⚙️ Technologies Used
* **Language:** Java (Socket Programming, Multithreading & File Handling)
* **IDE:** Visual Studio Code
* **Version Control:** Git & GitHub

---

**Author:** 

Atharv Tushar Bhosale

