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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	rr;

	rr = 0;
    if (size == 0)
		return (ft_strlen(src));
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

/*int main()
{
    char src[] = "coucou";
	char dest[10]; 
    ft_memset(dest, 'A', 10);
    ft_strlcpy(dest, src, 0);
}*/
