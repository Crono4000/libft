/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:30:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:41:36 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_nb(long nb)
{
	if (nb < 0)
		return (size_nb(-1 * nb) + 1);
	if (nb < 10)
		return (2);
	return (size_nb(nb / 10) + 1);
}

static void	recursive_itoa(int indice, char *result, long rest)
{
	if (rest < 0)
	{
		result[0] = '-';
		rest *= -1;
	}
	result[indice] = (rest % 10) + '0';
	if (rest < 10)
		return ;
	recursive_itoa(indice - 1, result, rest / 10);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;

	size = size_nb(n);
	result = malloc(sizeof(char) * size);
	recursive_itoa(size - 2, result, (long)n);
	result[size - 1] = '\0';
	return (result);
}

/*int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}*/
