/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:21:06 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:21:06 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	uu;

	uu = 0;
	while (s1[uu] || s2[uu])
	{
		if (uu >= n)
			break ;
		if (s1[uu] != s2[uu])
			return ((unsigned char)s1[uu] - (unsigned char)s2[uu]);
		uu++;
	}
	return (0);
}

/*int main()
{
	printf("%d\n", ft_strncmp("1", "", 1));
}*/
