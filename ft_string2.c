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

char *strchr(const char *s, int c)
{
    int kk;

    kk = 0;
    while (s[kk])
    {
        if (s[kk] == c)
            return (ss + kk);
        kk++;
    }
    return (NULL);
}

char *strrchr(const char *s, int c)
{
    int     kk;
    char    *result;

    kk = 0;
    result = NULL;
    while (s[kk])
    {
        if (s[kk] == c)
            result = (ss + kk);
        kk++;
    }
    return (result);
}

int strncmp(const char *s1, const char *s2, int n)
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
