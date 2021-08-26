# SHELL 🖥️
## Implementation of a shell in C ⬅️

In this project we implement a simple shell with the most common uses.

The term shell is used to refer to those programs that provide a user interface to access the operating system services. These can be graphical or plain text, depending on the type of interface they employ. Shells are designed to facilitate the way in which the different programs available on the computer are invoked or executed.

## _Examples of shell usage_

**Executable:** ```./hsh```

**For example:**

- **Input**
```/bin/ls -la```
- **Output**
```
total 32
drwxr-xr-x 1 user user  4096 Aug 21 20:29 .
drwxr-xr-x 1 user user  4096 Aug 21 20:27 ..
drwxr-xr-x 1 user user  4096 Aug 21 17:05 .git
-rw-r--r-- 1 user user   141 Aug 21 20:30 AUTHORS
-rw-r--r-- 1 user user     0 Aug 21 14:51 README.md
-rw-r--r-- 1 user user   523 Aug 23 15:04 builtins.c
-rw-r--r-- 1 user user   358 Aug 23 15:03 count_token.c
-rw-rw-rw- 1 user user   546 Aug 23 15:05 main.c
-rw-r--r-- 1 user user     0 Aug 21 15:28 man_1_simple_shell
-rw-r--r-- 1 user user   454 Aug 21 15:50 own_function.c
-rw-r--r-- 1 user user   542 Aug 23 15:05 print_prompt.c
-rwxr-xr-x 1 user user 17680 Aug 21 20:21 shell
-rw-r--r-- 1 user user   500 Aug 23 15:06 shell.h
-rw-r--r-- 1 user user    15 Aug 21 19:17 test_ls_2
-rw-r--r-- 1 user user   544 Aug 23 15:07 tokenizer.c
```

- **Input** ```/bin/pwd```
- **Output** ```/home/user/simple_shell```

More types of combinations are possible by using the commands belonging to the /bin/ folder to display on the screen.

## _Compilation_ 🔗

- Your code will be compiled this way: ```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```
- The main file must include its main header file (holberton.h): ```#include shell.h```
- Important, be careful not to place any c file other than main, because when compiling, this file will also be included.

## _Basic Shell Commands (Terminal)_ ▶️
This section presents a series of basic commands for working in a shell.

| Command |   Description | Example  |
| ------ | ------ | ------ |
| man | Provides information about commands or other programs in the Linux environment (manual pages).  |/bin/man ls |
| pwd | The current working directory is the directory in which commands are being operated. | /bin/pwd|
| ls | Lists the contents of a directory. If used without arguments, lists the contents of the current or current directory. |/bin/ls -l |
| more| Filter that allows the content of a text file to be displayed on a terminal one screen at a time. | /bin/more main.c |
| cd | Changes the current directory in which we are positioned. If used without arguments, it changes to the root directory of the user's home directory. | /bin/cd |
|touch | Creates file entries. | /bin/touch hello.c |
| mkdir | Creates directory entries. | /bin/mkdir hello |
|rmdir| Removes entries from empty directories. | /bin/rmdir hello.c|
| passwd | Change the user's password.  |/bin/passwd |
| rm | Deletes files or directories. | /bin/rm hello.c|
| cp | Copy files or directories. To copy a directory you must add the "-r" modifier. | /bin/cp hello.c world|
| mv | Move files or directories. This command is useful when renaming files or directories. | /bin/mv hello.c world.c|
| exit | Closes the current shell. | exit|


## _Files_ 📁

The files contained in this repository.

| File name  |Description |
| ------ | ------ |
|[main.c]| It is the main function where the cycle of the other functions is repeated. |
| [builtins.c] | This function contains the env display and the shell output with exit. |
| [count_token.c] | This function counts the characters of a string for later use in the tokenizer. |
| [own_function.c] | Here there are simple functions such as strcmp and strlen. |
| [print_prompt.c] | This function prints the $ from the shell and reads the string line from the terminal. |
| [tokenizer.c] | This function separates the string into words. |
| [shell.h] | Header file containing prototype functions and standard libraries. |

## _Installation_ ⚙️
To use this custom _printf function follow the steps below:
 - Clone the repository
 ```$ git clone https://github.com/lisethav/simple_shell```
- Enter the printf folder
```$ cd simple_shell```
- To convert all .c files to objetc (.o) files at once, this script is applied at the prompt (with or without flags):
```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh ```
- The next step is to run
```$ ./hsh ```

## _Flowchart_ ✨
### This is the flowchart of our code shell.
-

[![Untitled-Diagram-1.png](https://pngimage.net/wp-content/uploads/2018/06/process-flow-icon-png-7.png)](https://postimg.cc/zbjrJWg5)


## License

**Free Software**

[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Luipv_20) [![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Lisethav55)

Luisa Pinillos | Liseth Arias

[//]: # (These are reference links used in the body of this note. - )

   [main.c]: <https://github.com/lisethav/simple_shell/blob/master/main.c>
   [builtins.c]: <https://github.com/lisethav/simple_shell/blob/master/builtins.c>
   [count_token.c]: <https://github.com/lisethav/simple_shell/blob/master/count_token.c>
   [own_function.c]: <https://github.com/lisethav/simple_shell/blob/master/own_function.c>
   [print_prompt.c]: <https://github.com/lisethav/simple_shell/blob/master/print_prompt.c>
   [tokenizer.c]: <https://github.com/lisethav/simple_shell/blob/master/tokenizer.c>
   [shell.h]: <https://github.com/lisethav/simple_shell/blob/master/shell.h>
