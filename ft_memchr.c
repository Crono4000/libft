/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:30:14 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:30:14 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned int	kk;
	unsigned char	*nptr;
	unsigned char	ch;

	ch = value;
	kk = 0;
	nptr = (unsigned char *)ptr;
	while (kk < num)
	{
		if (nptr[kk] == ch)
			return (nptr + kk);
		kk++;
	}
	return (NULL);
}
