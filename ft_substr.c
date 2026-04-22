/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:04:17 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 12:04:17 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char			*str;
	unsigned int	index;
    unsigned int    llen;

    llen = ft_strlen(s);
    if (llen - start < len)
		len = llen - start;
	index = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (start + index < llen && index < len)
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

/*int main()
{
    printf("%s\n", ft_substr("tripouille", 0, 42000));
}*/
