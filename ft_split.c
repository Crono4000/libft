/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:49:10 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:35:49 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char to_find)
{
	int	count;
	int	yy;

	yy = 0;
	count = 1;
	if (str == NULL)
		return (0);
	while (str[yy])
	{
		if (str[yy] != to_find && (yy == 0 || str[yy - 1] == to_find))
			count++;
		yy++;
	}
	return (count);
}

static void	free_split(char **ptr)
{
	int	ind;

	ind = 0;
	while (ptr[ind])
	{
		free(ptr[ind]);
		ind++;
	}
}

static int	init_split(char ***result, int *ptr, int *ind2, int value)
{
	*ind2 = 0;
	*ptr = 0;
	*result = (char **)malloc(value * sizeof(char *));
	if (*result == NULL)
		return (1);
	(*result)[value - 1] = NULL;
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		ptr;
	int		ind1;
	int		ind2;

	if (init_split(&result, &ptr, &ind2, count_words(str, c)))
		return (NULL);
	while (str[ind2++])
	{
		if (str[ind2 - 1] != c && (ind2 - 1 == 0 || str[ind2 - 2] == c))
			ind1 = ind2 - 1;
		if (str[ind2 - 1] == c && (ind2 - 1 != 0 && str[ind2 - 2] != c))
		{
			result[ptr] = ft_substr(str, ind1, ind2 - 1 - ind1);
			if (!result[ptr++])
				return (free_split(result), NULL);
		}
	}
	if (ind2 - 1 != 0 && str[ind2 - 2] != c)
	{
		result[ptr] = ft_substr(str, ind1, ind2 - 1 - ind1);
		if (!result[ptr++])
			return (free_split(result), NULL);
	}
	return (result);
}

/*void print_split(char **spl)
{
	int	g;

	g = 0;
	while (spl[g] != NULL)
	{
		printf("%s\n", spl[g]);
		g++;
	}
}

int	main(int argc, char **arg)
{
	if (argc <= 2)
		return (0);
	char **ss = ft_split(arg[1], arg[2][0]);
	if (ss){
		print_split(ss);
		free_split(ss);
		free(ss);
	}
}*/
