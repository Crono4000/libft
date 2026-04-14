/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:12:28 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/14 18:12:26 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		cha;
	unsigned char		*ss;
	size_t				iterator;

	cha = (unsigned char) c;
	ss = (unsigned char*) s;
	iterator = 0;
	while (iterator < n)
	{
		ss[iterator] = cha;
		iterator++;
	}
	return s;
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	rr;

	rr = 0;
	while (rr < n)
	{
		((unsigned char*) dest)[rr] = ((unsigned char*) src)[rr];
		rr++;
	}
	return (dest);
}


