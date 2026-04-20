/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:52:29 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:52:29 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t num)
{
    int uu;

    uu = 0;
    while (uu < num)
    {
        if (s1[uu] != s2[uu])
            return (s1[uu] - s2[uu]);
        uu++;
    }
    return (0);
}
