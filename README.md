*This project has been created as part of the 42 curriculum by afranco-*

## Description

This project is the 42 C library. 
The goal of this project is to implement basic functions in order to learn linked lists, functions from libc, string manipulation and string operations.

## Instructions

### Requirements
- a c compiler
- make

### Makefile
| Command  | Description  |
|:--------------------------------:|:--------------------------------:|
| `make all` `make` `make libft.a` | Compiles and created the library libft.a |
| `make clean` | Clean the file .o created when creating `libft.a`. |
| `make fclean` | Calls clean from make and erases `libft.a`. |
| `make re` | Clean everything and generates a new `libft.a` |

### Usage

1. First, you should create and compile the libft library:
	```bash
	make
	```

2. Then you need to compile the program with the `libft.a`:
	```bash
	cc program.c libft.a
	```

### Example usage

1. Suppose you have a simple program `main.c`:
   ```c
   #include "libft.h"

   int	main(void)
   {
	   ft_putnbr_fd(456, 1);
	   return (0);
   }
   ```

2. Compile it with the library:
   ```bash
   cc main.c libft.a -o program
   ```

3. Run it:
   ```bash
   ./program
   ```

   Expected output:
   ```
   456
   ```

## Library Functions

### Part 1 – Libc Functions

| Function        | Description |
|----------------|------------|
| ft_isalpha     | Checks if a character is an alphabetic letter (A-Z, a-z) |
| ft_isdigit     | Checks if a character is a digit (0-9) |
| ft_isalnum     | Checks if a character is alphanumeric (letter or digit) |
| ft_isascii     | Checks if a character is within ASCII range (0–127) |
| ft_isprint     | Checks if a character is printable |
| ft_strlen      | Returns the length of a string |
| ft_memset      | Fills a block of memory with a given value |
| ft_bzero       | Sets a block of memory to zero |
| ft_memcpy      | Copies memory from source to destination (no overlap handling) |
| ft_memmove     | Copies memory safely (handles overlapping regions) |
| ft_strlcpy     | Copies a string with size limit and null-termination |
| ft_strlcat     | Concatenates strings with size limit |
| ft_toupper     | Converts a character to uppercase |
| ft_tolower     | Converts a character to lowercase |
| ft_strchr      | Finds first occurrence of a character in a string |
| ft_strrchr     | Finds last occurrence of a character in a string |
| ft_strncmp     | Compares two strings up to n characters |
| ft_memchr      | Searches for a byte in memory |
| ft_memcmp      | Compares two memory blocks |
| ft_strnstr     | Finds a substring within a string (bounded search) |
| ft_atoi        | Converts a string to an integer |
| ft_calloc      | Allocates zero-initialized memory |
| ft_strdup      | Duplicates a string (allocates new memory) |

### Part 2 – Additional Functions

| Function         | Description |
|------------------|------------|
| ft_substr        | Extracts a substring from a string |
| ft_strjoin       | Concatenates two strings into a new one |
| ft_strtrim       | Removes specified characters from start and end of a string |
| ft_split         | Splits a string into an array using a delimiter |
| ft_itoa          | Converts an integer to a string |
| ft_strmapi       | Applies a function to each character (creates new string) |
| ft_striteri      | Applies a function to each character (modifies in place) |
| ft_putchar_fd    | Writes a character to a file descriptor |
| ft_putstr_fd     | Writes a string to a file descriptor |
| ft_putendl_fd    | Writes a string followed by newline to a file descriptor |
| ft_putnbr_fd     | Writes an integer to a file descriptor |

### Part 3 – Linked List Functions

| Function           | Description |
|--------------------|------------|
| ft_lstnew          | Creates a new list node |
| ft_lstadd_front    | Adds a node at the beginning of the list |
| ft_lstsize         | Counts the number of nodes in the list |
| ft_lstlast         | Returns the last node of the list |
| ft_lstadd_back     | Adds a node at the end of the list |
| ft_lstdelone       | Deletes a single node (frees its content) |
| ft_lstclear        | Deletes and frees the entire list |
| ft_lstiter         | Applies a function to each node’s content |
| ft_lstmap          | Creates a new list by applying a function to each node |

## Resources

### References

- `man` pages
- Peer discussions

### IA usage

Large Language Models were used for:
- Understand the functions from libc
- Understand concepts from c like void pointers

### Tests

This project was tested using francinette.
