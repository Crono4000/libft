/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:46:01 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:46:01 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int main()
{
    printf("###teste ft_memset###\n");
	char mem[] = "fff553553";
	ft_memset(mem, 32, 5);
	print_bytes(mem, 9);
	char mem1[] = "fff553553";
	ft_memset(mem1, 288, 9);
	print_bytes(mem1, 9);
	char mem2[] = "goo";
	ft_memset(mem2, 96, 3);
	print_bytes(mem2, 3);
	printf("\n");
}*/
