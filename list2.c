/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:44:03 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/15 18:44:03 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
        return ;
    del(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current;
    t_list  *next;

    current = *lst;
    while (current != NULL)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
    *lst = NULL;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
        return ;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;

    new_list = NULL;
    if (lst == NULL)
        return NULL;
    while (lst != NULL)
    {
        ft_lstadd_back(&new_list, ft_lstnew(f(lst->content)));
        lst = lst->next;
    }
    ft_lstclear(&lst, del);
    return (new_list);
}
