/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:30:37 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:30:37 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t num)
{
	unsigned int	uu;
	unsigned char	*ss1;
	unsigned char	*ss2;

	uu = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (uu < num)
	{
		if (ss1[uu] != ss2[uu])
			return (ss1[uu] - ss2[uu]);
		uu++;
	}
	return (0);
}
