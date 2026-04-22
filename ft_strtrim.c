/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:27:49 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 16:27:49 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	iterator1;
	int	iterator2;

	iterator2 = (ft_strlen(s1)) - 1;
	iterator1 = 0;
	while (s1[iterator1] && ft_strchr(set, s1[iterator1]))
		iterator1++;
	while (iterator2 > iterator1 && ft_strchr(set, s1[iterator2]))
		iterator2--;
	if (iterator2 < iterator1)
		return (ft_substr(s1, (unsigned int)iterator1, 0));
	return (ft_substr(s1, (unsigned int)iterator1, (unsigned int)iterator2
			- (unsigned int)iterator1 + 1));
}

/*int main()
{
	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	printf("%s\n", ft_strtrim("", "123"));
}*/