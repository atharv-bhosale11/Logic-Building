# Assignment 64 - Logic Building

This assignment focuses on multithreaded client-server application development in Java using Socket Programming. The programs are designed to perform mathematical and number-related operations remotely through a client-server architecture.

## 🎯 Objective
The main objective of this assignment is to:
* Understand client-server architecture in Java
* Implement socket programming using `ServerSocket` and `Socket`
* Handle multiple clients simultaneously using multithreading
* Parse and process commands received from the client
* Perform mathematical and number-related operations on the server
* Send results back to the client
* Handle invalid commands and edge cases gracefully
* Divide program logic into separate handler classes and methods

## 🧠 Concepts Practiced
* Socket Programming
* Client-Server Architecture
* Multithreading
* `ServerSocket` and `Socket`
* `BufferedReader` and `PrintWriter`
* `Thread` Class and `run()` method
* Command Parsing using `split()`
* String Handling
* Exception Handling
* Conditional Statements
* User Defined Methods
* Logic Building

## 🛠️ Approach
Each problem is solved by building a server that:
1. Runs continuously on a dedicated port.
2. Accepts incoming client connections.
3. Creates a new thread for each connected client.
4. Reads the command sent by the client.
5. Parses the command string into an operation and operands.
6. Performs the required operation using separate methods.
7. Sends the result back to the client.
8. Handles invalid commands and division by zero properly.
9. Disconnects only the current client on the `QUIT` command.

The client program:
* Connects to the server using the IP address and port.
* Reads commands from the user via the console.
* Sends the command string to the server.
* Displays the response received from the server.

---

## 📂 Repository Structure

```text
Assignment-60/
│
├── Q1_MathServer.java
├── Q1_MathClient.java
├── Q2_NumberServer.java
├── Q2_NumberClient.java
└── README.md
```

---

## 💻 Supported Commands

### Q1 — Math Server (Port: 1234)

| Command | Description |
| :--- | :--- |
| `ADD <No1> <No2>` | Addition of two numbers |
| `SUB <No1> <No2>` | Subtraction of two numbers |
| `MULT <No1> <No2>` | Multiplication of two numbers |
| `DIV <No1> <No2>` | Division of two numbers |
| `MOD <No1> <No2>` | Modulus of two numbers |
| `MAX <No1> <No2>` | Maximum of two numbers |
| `MIN <No1> <No2>` | Minimum of two numbers |
| `QUIT` | Disconnect the current client |

### Q2 — Number Server (Port: 5678)

| Command | Description |
| :--- | :--- |
| `EVEN <number>` | Check if a number is even |
| `ODD <number>` | Check if a number is odd |
| `PRIME <number>` | Check if a number is prime |
| `PERFECT <number>` | Check if a number is perfect |
| `FACTORIAL <number>` | Find the factorial of a number |
| `REVERSE <number>` | Reverse the digits of a number |
| `QUIT` | Disconnect the current client |

---

## 🚀 How to Run

### Step 1 — Compile
Compile the server and client programs using your terminal:
```bash
javac Q1_MathServer.java Q1_MathClient.java
javac Q2_NumberServer.java Q2_NumberClient.java
```

### Step 2 — Run Q1 (Math Operations)
Open two separate terminal windows:
* **Terminal 1 (Server):** `java Q1_MathServer`
* **Terminal 2 (Client):** `java Q1_MathClient`

### Step 3 — Run Q2 (Number Operations)
Open two separate terminal windows:
* **Terminal 1 (Server):** `java Q2_NumberServer`
* **Terminal 2 (Client):** `java Q2_NumberClient`

> ⚠️ **Important:** Always start the Server first before running its corresponding Client!

---

## 📈 Learning Outcomes
After completing this assignment, I improved my ability to:
* Understand and implement client-server architecture in Java.
* Use `ServerSocket` and `Socket` classes for network communication.
* Handle multiple clients simultaneously using multithreading.
* Create and manage threads using the `Thread` class.
* Read and write data through socket streams.
* Parse command strings to identify operations and operands.
* Perform mathematical and number-related operations on the server.
* Send computed results back to the connected client.
* Handle invalid commands and edge cases like division by zero.
* Disconnect individual clients using the `QUIT` command.
* Write clean and structured Java programs with separate handler classes.

## ⚙️ Technologies Used
* **Language:** Java (Socket Programming & Multithreading)
* **IDE:** Visual Studio Code
* **Version Control:** Git & GitHub

---

**Author:** 
Atharv Tushar Bhosale

