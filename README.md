# :mag_right: Simple Shell :mag_right:

### AUTHORS
> Jaime Garcia <2184@holbertonschool.com>
## What is a unix shell?

A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems.
The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

Users typically interact with a Unix shell using a terminal emulator;
however, direct operation via serial hardware connections or Secure Shell are common for server systems.
All Unix shells provide filename wildcarding, piping, here documents, command substitution, variables and control structures for condition-testing and iteration.

## Output

* Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
* The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with sh:

![image](https://user-images.githubusercontent.com/62820685/114639386-54194580-9c93-11eb-8527-ce6f5b3bdc85.png)

Same error with your program hsh:

![image](https://user-images.githubusercontent.com/62820685/114639430-7612c800-9c93-11eb-96a4-463f008dd868.png)


## List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Compilation

shell will be compiled this way:

![image](https://user-images.githubusercontent.com/62820685/114639549-c427cb80-9c93-11eb-992f-7f4bf29070e4.png)
