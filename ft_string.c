/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:16:07 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/17 19:03:26 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		current++;
	}
	return (current);
}

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	rr;

	rr = 0;
	while (src[rr] != '\0')
	{
		if (rr < size - 1)
			dest[rr] = src[rr];
		if (rr == size - 1)
			dest[rr] = '\0';
		rr++;
	}
	if (rr < size)
		dest[rr] = '\0';
	return (rr);
}

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
