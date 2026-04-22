/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:04:07 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 19:04:37 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
