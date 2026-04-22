/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:59:15 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 19:05:27 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*void print_node_number(void *number)
{
	printf("%d ", ((int *) number)[0]);
}

void	print_list(t_list *lista)
{
	ft_lstiter(lista, print_node_number);
	printf("\n");
}

t_list	*generate_list_of_numbers(int start, int end)
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
	return (result);
}

void	do_nothing(void* x) {
	(void)x;
}

void	*double_int(void *x)
{
	*((int *)x) = *((int *)x) * 2;
	return (x);
}

int	main(void)
{
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
}*/
