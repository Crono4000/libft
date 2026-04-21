/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:30:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/21 16:41:44 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	sizeNb(long nb)
{
	if (nb < 0)
		return (sizeNb(-1 * nb) + 1);
	if (nb < 10)
		return (2);
	return (sizeNb(nb / 10) + 1);
}

static	void	recursive_itoa(int indice, char *result, int rest)
{
	if (rest < 0)
		rest *= (result[0] = '-', -1);
	result[indice] = (rest % 10) + '0';
	if (rest < 10)
		return ;
	recursive_itoa(indice - 1, result, rest / 10);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;

	size = sizeNb(n);
	result = malloc(sizeof(char) * size);
	recursive_itoa(size - 1, result, n);
    return (result);
}

