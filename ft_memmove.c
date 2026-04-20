/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:48:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:48:58 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	rr;

	rr = ((signed int) n) - 1;
	if ((long) dest > (long) src)
	{
		while (rr >= 0)
		{
			((unsigned char*) dest)[rr] = ((unsigned char*) src)[rr];
			rr--;
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
