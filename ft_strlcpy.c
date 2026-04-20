/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:54:22 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:54:22 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
