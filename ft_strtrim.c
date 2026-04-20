/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:11:05 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 16:11:05 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int	iterator1;
	unsigned int	iterator2;

	iterator2 = ((unsigned int)ft_strlen(s1)) - 1;
	iterator1 = 0;
	while (ft_strchr(set, s1[iterator1]))
		iterator1++;
	while (ft_strchr(set, s1[iterator2]))
		iterator2--;
	return (ft_substr(s1, iterator1, iterator2 - iterator1 + 1));
}
