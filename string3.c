/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:37:45 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/16 17:37:45 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char			*str;
	unsigned int	index;

	index = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (index < len)
	{
		str[index] = s[start + index];
		index++;
	}
	str[len] = '\0';
	return (str);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index1;
	int		index2;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	index1 = 0;
	index2 = 0;
	while (s1[index1])
	{
		str[index1] = s1[index1];
		index1++;
	}
	while (s1[index1 + index2])
	{
		str[index1 + index2] = s2[index2];
		index2++;
	}
	return (str);
}

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
