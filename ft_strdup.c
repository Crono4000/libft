/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:18:01 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/10 16:18:01 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_strdup(char *src)
{
	char	*new;
	int		size;
	int		ii;

	size = 0;
	while (src[size])
		size++;
	new = (char *) malloc(sizeof(char) * (size + 1));
	ii = 0;
	while (ii < size + 1)
	{
		new[ii] = src[ii];
		ii++;
	}
	return (new);
}

char	*ft_strnstr(char *str, char *to_find, size_t size)
{
	unsigned int	yy;
	unsigned int	tt;

	yy = 0;
	tt = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[yy] && yy < size)
	{
		if (str[yy] == to_find[tt])
		{
			tt++;
			if (!to_find[tt])
				return (str + yy - tt + 1);
		}
		else
		{
			tt = 0;
		}
		yy++;
	}
	return ((void *)0);
}
