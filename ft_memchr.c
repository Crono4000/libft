/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 11:52:57 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/18 11:52:57 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t num)
{
    unsigned int	kk;
    unsigned char	*result;
    unsigned char	*nptr;

    kk = 0;
	nptr = (unsigned char *) ptr;
    result = NULL;
    while (kk < num)
    {
        if (nptr[kk] == value)
            result = (nptr + kk);
        kk++;
    }
    return (result);
}
