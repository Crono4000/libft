/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:49:10 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/17 21:22:05 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_strstr(char *str, char to_find)
{
	int	count;
	int	yy;

	yy = 0;
	count = 1;
	while (str[yy])
	{
		if (str[yy] != to_find && (yy == 0 || str[yy - 1] == to_find))
			count++;
		yy++;
		
	}
	return (count);
}

static	void	free_split(char **ptr, int ind)
{
	ind--;
	while (ind >= 0)
	{
		free(ptr[ind]);
		ind--;
	}
}

void	*calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb != 0 && size > MAX_SIZE / nmemb)
		return (NULL);
	result = malloc(size * nmemb);
	ft_bzero(result, size * nmemb);
	return (result);
}

char	**ft_split(char *str, char charset)
{
	char	**result;
	int		ptr;
	int		ind1;
	int		ind2;

	ind2 = 0;
	ptr = 0;
	result = (char **) malloc(count_strstr(str, charset) * sizeof(char *));
	if (result == NULL || str == NULL)
		return (NULL);
	while (str[ind2])
	{
		if (str[ind2] != charset && (ind2 == 0 || str[ind2 - 1] == charset))
			ind1 = ind2;
		if (str[ind2] == charset && (ind2 != 0 && str[ind2 - 1] != charset))
		{
			result[ptr] = ft_substr(str, ind1, ind2 - ind1);
			if (!result[ptr])
				return (free_split(result, ptr), NULL);
			ptr++;
		}
		ind2++;
	}
	if (ind2 != 0 && str[ind2 - 1] != charset)
	{
		result[ptr] = ft_substr(str, ind1, ind2 - ind1);
		if (!result[ptr])
				return (free_split(result, ptr), NULL);
		ptr++;
	}
	result[ptr] = NULL;
	return (result);
}
