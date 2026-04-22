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
| `make re` | Clean everything and generated a new `libft.a` |

### Usage

1. First, you should create and compile the libft library:
	```bash
	make
	```

2. Then you need compile the program with the `libft.a`:
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

### Parte 1 – Funções Libc

| Função        | Descrição |
|--------------|----------|
| ft_isalpha   | Verifica se um carácter é uma letra (A-Z, a-z) |
| ft_isdigit   | Verifica se é um dígito (0-9) |
| ft_isalnum   | Verifica se é letra ou número |
| ft_isascii   | Verifica se pertence ao ASCII (0-127) |
| ft_isprint   | Verifica se é imprimível |
| ft_strlen    | Calcula o tamanho de uma string |
| ft_memset    | Preenche memória com um valor |
| ft_bzero     | Coloca memória a zero |
| ft_memcpy    | Copia memória (sem overlap) |
| ft_memmove   | Copia memória (com overlap seguro) |
| ft_strlcpy   | Copia string com limite de tamanho |
| ft_strlcat   | Concatena strings com limite |
| ft_toupper   | Converte para maiúscula |
| ft_tolower   | Converte para minúscula |
| ft_strchr    | Procura primeira ocorrência de char |
| ft_strrchr   | Procura última ocorrência de char |
| ft_strncmp   | Compara duas strings até n chars |
| ft_memchr    | Procura byte em memória |
| ft_memcmp    | Compara blocos de memória |
| ft_strnstr   | Procura substring dentro de limite |
| ft_atoi      | Converte string para inteiro |
| ft_calloc    | Aloca memória inicializada a 0 |
| ft_strdup    | Duplica uma string |

### Parte 2 – Funções adicionais

| Função         | Descrição |
|---------------|----------|
| ft_substr     | Extrai substring de uma string |
| ft_strjoin    | Junta duas strings numa nova |
| ft_strtrim    | Remove caracteres do início/fim |
| ft_split      | Divide string por delimitador |
| ft_itoa       | Converte inteiro para string |
| ft_strmapi    | Aplica função a cada char (nova string) |
| ft_striteri   | Aplica função a cada char (in-place) |
| ft_putchar_fd | Escreve char num file descriptor |
| ft_putstr_fd  | Escreve string num file descriptor |
| ft_putendl_fd | Escreve string + newline |
| ft_putnbr_fd  | Escreve número num file descriptor |

### Parte 3 – Linked List

| Função           | Descrição |
|------------------|----------|
| ft_lstnew        | Cria novo nó |
| ft_lstadd_front  | Adiciona nó no início |
| ft_lstsize       | Conta número de nós |
| ft_lstlast       | Retorna último nó |
| ft_lstadd_back   | Adiciona nó no fim |
| ft_lstdelone     | Liberta um nó |
| ft_lstclear      | Liberta lista inteira |
| ft_lstiter       | Aplica função a cada nó |
| ft_lstmap        | Cria nova lista transformada |

## Resources

### References

- `man` pages
- Peer discussions

### IA usage

Large Language Models were used for:
- Understand the functions from libc
- Understand concepts from c like void pointers

### Tests

This projected was tested using libftTester.
