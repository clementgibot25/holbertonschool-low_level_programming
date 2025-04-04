Sure! Here's a concise and informative `README.md` you can use to explain **file descriptors**, **system calls**, and the functions `open()`, `read()`, and `write()` in C:

---

# 📁 File Descriptors & System Calls in C

This README provides an overview of file descriptors and basic system calls in C, focusing on the `open()`, `read()`, and `write()` functions. These low-level I/O operations allow direct interaction with the operating system for reading and writing data.

---

## 🔧 What is a File Descriptor?

A **file descriptor (FD)** is an integer that uniquely identifies an open file within a process. File descriptors are used by the operating system to keep track of files, devices, sockets, and more.

### Standard File Descriptors:
| FD  | Name    | Description        |
|-----|---------|--------------------|
| 0   | stdin   | Standard Input     |
| 1   | stdout  | Standard Output    |
| 2   | stderr  | Standard Error     |

---

## 🧩 System Calls

System calls are the interface between a user program and the operating system kernel. They allow programs to request services from the OS like file I/O, memory allocation, and process control.

Common system calls for file operations:
- `open()` – Open a file
- `read()` – Read from a file
- `write()` – Write to a file
- `close()` – Close a file descriptor

---

## 📂 `open()` – Open a File

```c
#include <fcntl.h>
#include <unistd.h>

int fd = open("file.txt", O_RDONLY);
```

### Parameters:
- `pathname`: Path to the file.
- `flags`: File access mode (e.g., `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`).

### Returns:
- File descriptor on success.
- `-1` on failure (check `errno` for error).

---

## 📖 `read()` – Read From a File

```c
ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
```

### Parameters:
- `fd`: File descriptor.
- `buffer`: Memory buffer to store read data.
- `count`: Maximum number of bytes to read.

### Returns:
- Number of bytes read.
- `0` for end-of-file (EOF).
- `-1` on error.

---

## ✍️ `write()` – Write to a File

```c
ssize_t bytesWritten = write(fd, buffer, strlen(buffer));
```

### Parameters:
- `fd`: File descriptor.
- `buffer`: Data to write.
- `count`: Number of bytes to write.

### Returns:
- Number of bytes written.
- `-1` on error.

---

## 🔒 `close()` – Close a File

```c
close(fd);
```

Closes the file descriptor and releases resources.

---

## 🧪 Example

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    char buffer[100];
    int fd = open("file.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    ssize_t bytesRead = read(fd, buffer, sizeof(buffer) - 1);
    if (bytesRead == -1) {
        perror("read");
        close(fd);
        return 1;
    }

    buffer[bytesRead] = '\0'; // Null-terminate the buffer
    write(STDOUT_FILENO, buffer, bytesRead);

    close(fd);
    return 0;
}
```

---

## 🧠 Notes
- Always check the return values for error handling.
- Use `perror()` or `strerror(errno)` to debug system call errors.
- File descriptors are process-specific and are reused once closed.

---

## 📚 References
- [man 2 open](https://man7.org/linux/man-pages/man2/open.2.html)
- [man 2 read](https://man7.org/linux/man-pages/man2/read.2.html)
- [man 2 write](https://man7.org/linux/man-pages/man2/write.2.html)
