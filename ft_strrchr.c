/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:58:42 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:58:42 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int				kk;
    char		*result;
    char        cc;

    cc = c;
    kk = 0;
    result = NULL;
    while (s[kk])
    {
        if (s[kk] == cc)
            result = (char *)(s + kk);
        kk++;
    }
    if (s[kk] == cc)
        result = (char *)(s + kk);
    return (result);
}
