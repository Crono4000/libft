/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:59:57 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:59:57 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int uu;

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
