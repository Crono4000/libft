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

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	unsigned int	yy;
	unsigned int	tt;

	yy = 0;
	tt = 0;
	if (to_find[0] == '\0')
		return (char *)(str);
	while (str[yy] && yy < size)
	{
		if (str[yy] == to_find[tt])
		{
			tt++;
			if (!to_find[tt])
				return (char *)(str + yy - tt + 1);
		}
		else
		{
			tt = 0;
		}
		yy++;
	}
	return (NULL);
}
