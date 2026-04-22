/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:20:03 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:20:03 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		index1;
	int		index2;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	index1 = 0;
	index2 = 0;
	while (s1[index1])
	{
		str[index1] = s1[index1];
		index1++;
	}
	while (s2[index2])
	{
		str[index1 + index2] = s2[index2];
		index2++;
	}
	str[index1 + index2] = '\0';
	return (str);
}

/*int main()
{
	printf("%s\n", ft_strjoin("tripouille", "42"));
	printf("%s\n", ft_strjoin("", "42"));
}*/
