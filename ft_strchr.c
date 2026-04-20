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
