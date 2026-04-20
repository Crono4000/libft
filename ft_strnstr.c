/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:44:41 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:44:41 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

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
