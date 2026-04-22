/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:29:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:29:58 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (new_list);
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
