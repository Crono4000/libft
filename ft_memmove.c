/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:31:04 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:31:04 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	rr;

	rr = ((signed int)n) - 1;
	if ((long)dest > (long)src)
	{
		while (rr >= 0)
		{
			((unsigned char *)dest)[rr] = ((unsigned char *)src)[rr];
			rr--;
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}

/*void print_bytes(void *arr, size_t size)
{
	size_t yy = 0;
	while (yy < size)
	{
		printf("%02X", ((unsigned char *) arr)[yy]);
		yy++;
	}
	printf("\n");
}

int	main(void)
{
	printf("###teste ft_memmove###\n");
	ft_memmove(mem3, "1112", 5);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "wowwowwowwow\n", 13);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "%%\n", 4);
	print_bytes(mem3, 20);
	ft_memmove(mem3 + 3, mem3, 5);
	print_bytes(mem3 + 3 , 17);
	ft_memmove(mem3, mem3 + 5, 5);
	print_bytes(mem3, 20);
	ft_memmove(mem3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);
	print_bytes(mem3, 20);
	printf("\n");
}*/
