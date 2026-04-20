/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:05:14 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 17:05:14 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *) malloc(sizeof(t_list));
    if (node == NULL)
        return NULL;
    node->content = content;
    node->next = NULL;
    return (node);
}

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        size++;
    }
    return (size);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    (*lst) = new;
}

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}
