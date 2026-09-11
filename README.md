# 🐚 Mini Unix Shell in C

A simple **Unix/Linux Shell** implemented in **C** that can execute system commands using process management system calls.

## 📌 Features

* 🖥️ Custom shell prompt: `Lucifer#`
* ⚙️ Execute Linux commands
* 🌱 Create child processes using `fork()`
* 🚀 Execute commands using `execvp()`
* ⏳ Parent process waits using `wait()`
* 🔤 Parse commands and arguments using `strtok()`
* 💾 Dynamic memory allocation using `malloc()`
* 🚪 Exit the shell using `exit` or `Logoff`
* ❌ Displays an error message for invalid commands

## 🛠️ Technologies Used

* 💻 C Programming
* 🐧 Linux / Unix
* 🔄 Process Management
* 🌿 `fork()`
* 🚀 `execvp()`
* ⏳ `wait()`
* 🧠 Dynamic Memory Allocation
* 🔤 String Manipulation
* 📂 Git & GitHub

## ⚙️ Working

The shell follows these steps:

```text
User enters command
        ↓
Command is read using fgets()
        ↓
Arguments are separated using strtok()
        ↓
fork() creates a child process
        ↓
Child process executes command using execvp()
        ↓
Parent process waits using wait()
        ↓
Shell displays prompt again
```

## 🧩 Example

```text
Lucifer# ls
file1.c  file2.c  README.md

Lucifer# pwd
/home/lucifer/Mini_Unix_Shell

Lucifer# echo Hello World
Hello World

Lucifer# exit
Shell Terminated
```

## ▶️ Compilation

Compile the program using GCC:

```bash
gcc shell.c -o shell
```

## 🚀 Run

```bash
./shell
```

## 💡 Supported Commands

The shell can execute Linux commands available in the system, for example:

```bash
ls
pwd
date
whoami
echo Hello
mkdir Test
```

## 🚪 Exit Commands

To terminate the shell:

```text
Lucifer# exit
```

or

```text
Lucifer# Logoff
```

## 🧠 System Calls Used

| Function      | Purpose                               |
| ------------- | ------------------------------------- |
| 🧬 `fork()`   | Creates a child process               |
| 🚀 `execvp()` | Executes the entered command          |
| ⏳ `wait()`    | Waits for the child process to finish |
| 🔤 `strtok()` | Splits the command into arguments     |
| 🧠 `malloc()` | Dynamically allocates memory          |

## 📂 Project Structure

```text
Mini-Unix-Shell/
│
├── shell.c
└── README.md
```

## 🎯 Learning Outcomes

Through this project, I learned:

* 🐧 Basics of Unix/Linux shell operation
* 🧬 Process creation using `fork()`
* 👨‍👦 Parent and child process handling
* 🚀 Program execution using the `exec` family
* ⏳ Process synchronization using `wait()`
* 🔤 Command-line argument parsing
* 🧠 Dynamic memory management in C

## 👨‍💻 Author

**Bhavya Rosiya**

⭐ If you like this project, don't forget to give it a star!
