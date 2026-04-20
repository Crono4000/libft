/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:49:10 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 16:34:24 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strstr(char *str, char to_find)
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

static	void	free_split(char **ptr, int ind)
{
	ind--;
	while (ind >= 0)
	{
		free(ptr[ind]);
		ind--;
	}
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

/*void print_split(char **spl)
{
	int g = 0;
	while (spl[g] != NULL)
	{
		printf("%s\n", spl[g]);
		g++;
	}
}

int main(int argc, char **arg)
{
	if (argc <= 2)
		return 0;
	char **ss = ft_split(arg[1], arg[2][0]);
	print_split(ss);
	if (ss)
		for()
		free(ss);
}*/
