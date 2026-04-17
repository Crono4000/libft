
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void print_bytes(void *arr, size_t size)
{
	size_t yy = 0;
	while (yy < size)
	{
		printf("%02X", ((unsigned char *) arr)[yy]);
		yy++;
	}
	printf("\n");
}

void print_node_number(void *number)
{
	printf("%d ", ((int *) number)[0]);
}

void print_list(t_list *lista)
{
	ft_lstiter(lista, print_node_number);
	printf("\n");
}

t_list *generate_list_of_numbers(int start, int end)
{
	if (start > end)
		return (NULL);
	t_list *result = NULL;
	int it = 0;
	int *values = malloc(sizeof(int) * (end - start));
	while (start + it != end)
	{
		*(values + it) = start + it;
		ft_lstadd_back(&result, ft_lstnew(values + it));
		it += 1;
	}
	return result;
}

void do_nothing(void* x) {
    (void)x;
}

void *double_int(void *x)
{
	*((int *)x) = *((int *)x) * 2;
	return x;
}

int main()
{
	printf("###teste ft_isalpha###\n");
	printf("Result for a is %d.\n", ft_isalpha('a'));
	printf("Result for 2 is %d.\n", ft_isalpha('2'));
	printf("Result for B is %d.\n", ft_isalpha('B'));
	printf("\n");

	printf("###teste ft_isdigit###\n");
	printf("Result for a is %d.\n", ft_isdigit('a'));
	printf("Result for 2 is %d.\n", ft_isdigit('2'));
	printf("Result for ' ' is %d.\n", ft_isdigit(' '));
	printf("\n");

	printf("###teste ft_isalnum###\n");
	printf("Result for a is %d.\n", ft_isalnum('a'));
	printf("Result for 2 is %d.\n", ft_isalnum('2'));
	printf("Result for ' ' is %d.\n", ft_isalnum(' '));
	printf("Result for A is %d.\n", ft_isalnum('A'));
	printf("\n");

	printf("###teste ft_isascii###\n");
	printf("Result for \\x80 is %d.\n", ft_isascii('\x80'));
	printf("Result for 2 is %d.\n", ft_isascii('2'));
	printf("Result for ' ' is %d.\n", ft_isascii(' '));
	printf("Result for \\xA1 is %d.\n", ft_isascii('\xA1'));
	printf("Result for \\x00 is %d.\n", ft_isascii('\x00'));
	printf("\n");

	printf("###teste ft_isprint###\n");
	printf("Result for \\x80 is %d.\n", ft_isprint('\x80'));
	printf("Result for 2 is %d.\n", ft_isprint('2'));
	printf("Result for ' ' is %d.\n", ft_isprint(' '));
	printf("Result for \\xA1 is %d.\n", ft_isprint('\xA1'));
	printf("Result for \\x09 is %d.\n", ft_isprint('\x09'));
	printf("\n");

	printf("###teste ft_memset###\n");
	char mem[] = "fff553553";
	ft_memset(mem, 32, 5);
	print_bytes(mem, 9);
	char mem1[] = "fff553553";
	ft_memset(mem1, 288, 9);
	print_bytes(mem1, 9);
	char mem2[] = "goo";
	ft_memset(mem2, 96, 3);
	print_bytes(mem2, 3);
	printf("\n");

	printf("###teste ft_memcpy###\n");
	char mem3[20];
	ft_memcpy(mem3, "1112", 5);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "wowwowwowwow\n", 13);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "%%\n", 4);
	print_bytes(mem3, 20);
	ft_memcpy(mem3 + 3, mem3, 5);
	print_bytes(mem3 + 3 , 17);
	ft_memcpy(mem3, mem3 + 5, 5);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);
	print_bytes(mem3, 20);
	printf("\n");

	printf("###teste ft_memmove###\n");
	ft_memmove(mem3, "1112", 5);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "wowwowwowwow\n", 13);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "%%\n", 4);
	print_bytes(mem3, 20);
	ft_memmove(mem3 + 3, mem3, 5);
	print_bytes(mem3 + 3 , 17);
	ft_memmove(mem3, mem3 + 5, 5);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);
	print_bytes(mem3, 20);
	printf("\n");

	printf("###teste ft_atoi###\n");
	printf("%d\n", ft_atoi("  -22341"));
	printf("%d\n", ft_atoi("340000"));
	printf("%d\n", ft_atoi("999999999"));
	printf("%d\n", ft_atoi("--+503"));
	printf("\n");

	printf("###teste listas###\n");
	int goog = 9;
	int goog2 = 19;
	t_list *teste = ft_lstnew(&goog);
	print_node_number(teste->content);
	printf("\n");
	ft_lstadd_back(&teste, ft_lstnew(&goog2));
	ft_lstadd_front(&teste, ft_lstnew(&goog2));
	print_list(teste);
	printf("%d\n", ft_lstsize(teste));
	ft_lstclear(&teste, do_nothing);
	print_list(teste);
	teste = generate_list_of_numbers(0, 5);
	print_list(teste);
	ft_lstmap(teste, double_int, do_nothing);
	print_list(teste);
	printf("\n");
}