/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:30:52 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:30:52 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	rr;

	rr = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (rr < n)
	{
		((unsigned char *)dest)[rr] = ((unsigned char *)src)[rr];
		rr++;
	}
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
	printf("###teste ft_memcpy###\n");
	char mem3[20];
	ft_memcpy(mem3, "1112", 5);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "wowwowwowwow\n", 13);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "%%\n", 4);
	print_bytes(mem3, 20);
	ft_memcpy(mem3 + 3, mem3, 5);
	print_bytes(mem3 + 3 , 17);
	ft_memcpy(mem3, mem3 + 5, 5);
	print_bytes(mem3, 20);
	ft_memcpy(mem3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);
	print_bytes(mem3, 20);
	printf("\n");
}*/
