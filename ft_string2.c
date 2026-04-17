/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:55:45 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/15 15:55:45 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
    int kk;

    kk = 0;
    while (s[kk])
    {
        if (s[kk] == c)
            return (s + kk);
        kk++;
    }
    return (NULL);
}

const char *ft_strrchr(const char *s, int c)
{
    int				kk;
    const char		*result;

    kk = 0;
    result = NULL;
    while (s[kk])
    {
        if (s[kk] == c)
            result = (s + kk);
        kk++;
    }
    return (result);
}

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int uu;

    uu = 0;
    while (s1[uu] || s2[uu])
    {
        if (uu >= n)
            break;
        if (s1[uu] != s2[uu])
            return (s1[uu] - s2[uu]);
        uu++;
    }
    return (0);
}
