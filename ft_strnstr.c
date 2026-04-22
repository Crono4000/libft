/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:21:24 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:21:24 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	unsigned int	yy;
	unsigned int	tt;

	yy = 0;
	tt = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return ((char *)(str));
	while (str[yy] && yy < size)
	{
		if (yy + tt - 1 < size && !ft_strncmp(str + yy, to_find, tt))
			return ((char *)(str + yy));
		yy++;
	}
	return (NULL);
}

/*int main()
{
	printf("%s\n", ft_strnstr("aaabcabcd", "aabc", 9));
}*/