/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:57:47 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:57:47 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int     kk;
    char    ch;

    ch = c;
    kk = 0;
    while (s[kk])
    {
        if (s[kk] == ch)
            return (char *)(s + kk);
        kk++;
    }
    if (s[kk] == ch)
        return (char *)(s + kk);
    return (NULL);
}

/*int main()
{
    printf("%s\n", ft_strchr("tripouille", 'r'));
    printf("%s\n", ft_strchr("tripouille", 0));
    printf("%s\n", ft_strchr("tripouille", 't' + 256));
}*/
