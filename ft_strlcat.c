# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlcat.x                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/18 11:54:59 by afranco-          #+#    #+#              #
#    Updated: 2026/04/18 11:54:59 by afranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	yy;
	unsigned int	xx;

	xx = 0;
	yy = 0;
	while (xx < size && dest[xx])
		xx++;
	while (src[yy])
	{
		if (xx + yy < size - 1)
			dest[xx + yy] = src[yy];
		if (xx + yy == size - 1)
			dest[xx + yy] = '\0';
		yy++;
	}
	if (xx + yy < size)
		dest[xx + yy] = '\0';
	return (xx + yy);
}
