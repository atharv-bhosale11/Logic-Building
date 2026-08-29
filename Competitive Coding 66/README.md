# Assignment 66 - Logic Building

This assignment focuses on file handling in Java using the `FileInputStream`, `FileOutputStream`, and `File` classes. The programs are designed to perform different file operations such as writing, reading, copying, retrieving file information, and listing directory contents.

## Objective
The main objective of this assignment is to:
* Understand and implement file handling in Java
* Write data to a file using `FileOutputStream`
* Read data from a file using `FileInputStream`
* Copy contents from one file to another
* Display detailed information about a file using the `File` class
* List all files and directories inside a given directory
* Handle file not found and invalid path errors gracefully
* Divide program logic into separate methods
* Develop logical solutions for file-based problems

## Concepts Practiced
* File Handling
* `FileInputStream`
* `FileOutputStream`
* `File` Class
* Byte Stream
* Reading Bytes using `read()`
* Writing Bytes using `write()`
* `getBytes()` method
* `exists()` method
* `isDirectory()` method
* `isFile()` method
* `list()` method
* `length()` method
* `canRead()` and `canWrite()` methods
* `isHidden()` method
* `lastModified()` method
* `SimpleDateFormat`
* `File.separator`
* `finally` block
* Exception Handling
* Conditional Statements
* User Defined Methods

---

## Problems Covered & Approach

### Q1 — Write File
The program handles file writing by:
1. Accepting filename and data from the user.
2. Opening the file using `FileOutputStream`.
3. Converting the string data to bytes using `getBytes()`.
4. Writing bytes to the file using `write()`.
5. Closing the file in the `finally` block.

### Q2 — Read File
The program handles file reading by:
1. Accepting filename from the user.
2. Checking if the file exists using `exists()`.
3. Opening the file using `FileInputStream`.
4. Reading one byte at a time using `read()`.
5. Converting each byte to character using `(char)` cast.
6. Stopping when `read()` returns `-1` indicating end of file.
7. Closing the file in the `finally` block.

### Q3 — Copy File
The program handles file copying by:
1. Accepting source and destination filenames from the user.
2. Checking if the source file exists.
3. Opening source using `FileInputStream` and destination using `FileOutputStream`.
4. Reading one byte at a time from source and writing to destination.
5. Counting total bytes copied.
6. Closing both files in the `finally` block.

### Q4 — File Information
The program handles file information by:
1. Accepting filename from the user.
2. Checking if the file exists using `exists()`.
3. Using `File` class methods to retrieve name, path, size, permissions, and last modified date.
4. Formatting last modified date using `SimpleDateFormat`.
5. Displaying all information in a structured format.

### Q5 — List Directory
The program handles directory listing by:
1. Accepting directory path from the user.
2. Checking if the path exists using `exists()`.
3. Checking if the path is a directory using `isDirectory()`.
4. Retrieving all contents using `list()`.
5. Checking if each item is a file or directory.
6. Displaying contents with `[FILE]` and `[DIR]` labels.
7. Displaying total count of items.

---

## Repository Structure

```text
Assignment-66/
│
├── Q1_WriteFile.java
├── Q2_ReadFile.java
├── Q3_CopyFile.java
├── Q4_FileInfo.java
├── Q5_ListDirectory.java
└── README.md
```

---

## File Class Methods Used

| Method | Description |
| :--- | :--- |
| `exists()` | Checks if file or directory exists |
| `isFile()` | Checks if path is a file |
| `isDirectory()` | Checks if path is a directory |
| `getName()` | Returns name of the file |
| `getAbsolutePath()` | Returns full path of the file |
| `length()` | Returns size of file in bytes |
| `canRead()` | Checks if file has read permission |
| `canWrite()` | Checks if file has write permission |
| `isHidden()` | Checks if file is hidden |
| `lastModified()` | Returns last modified time in milliseconds |
| `list()` | Returns array of contents inside directory |
| `createNewFile()` | Creates a new empty file |

---

## How to Run

### Q1 — Write File
```bash
javac Q1_WriteFile.java
java Q1_WriteFile
```

### Q2 — Read File
```bash
javac Q2_ReadFile.java
java Q2_ReadFile
```

### Q3 — Copy File
```bash
javac Q3_CopyFile.java
java Q3_CopyFile
```

### Q4 — File Information
```bash
javac Q4_FileInfo.java
java Q4_FileInfo
```

### Q5 — List Directory
```bash
javac Q5_ListDirectory.java
java Q5_ListDirectory
```

---

## Sample Output

### Q1
```text
Enter file name : Demo.txt
Enter data : Marvellous Infosystems Pune
Data written successfully
File Name : Demo.txt
Absolute Path : C:\Users\Ishwari Surve\Demo.txt
```

### Q2
```text
Enter file name : Demo.txt
File contents : Marvellous Infosystems Pune
```

### Q3
```text
Enter source file : Demo.txt
Enter destination file : Backup.txt
File copied successfully
Total bytes copied : 28
```

### Q4
```text
Enter file name : Demo.txt
File Name : Demo.txt
Absolute Path : C:\Users\Ishwari Surve\Demo.txt
File Size : 2048 bytes
Readable : true
Writable : true
Hidden : false
Last Modified : 27-08-2026 14:35:22
```

### Q5
```text
Enter directory : Marvellous
Contents : 
-------------------------------------------
[FILE] Demo.txt
[FILE] Student.txt
[FILE] Java.pdf
[DIR] Images
[DIR] Backup
-------------------------------------------
Total items : 5
```

---

## Learning Outcome
After completing this assignment, I improved my ability to:
* Understand and implement file handling in Java
* Write data to a file using `FileOutputStream` byte streams
* Read data from a file using `FileInputStream` byte streams
* Copy file contents byte by byte from source to destination
* Handle both text and binary files using byte streams
* Retrieve detailed file information using the `File` class
* Check file permissions using `canRead` and `canWrite` methods
* Format last modified date using `SimpleDateFormat`
* List all contents of a directory using the `list` method
* Distinguish between files and directories using `isFile` and `isDirectory`
* Handle file not found errors with appropriate messages
* Close streams properly using the `finally` block
* Use `File.separator` for cross-platform path compatibility
* Write clean and structured Java programs with separate methods

## Technologies Used
* **Language:** Java
* **Concepts:** Byte Streams, File Handling, Exception Handling
* **IDE/Tools:** Visual Studio Code, Git & GitHub

---
**Author:** 

Atharv Tushar Bhosale
