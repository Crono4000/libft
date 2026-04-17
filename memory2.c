/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:18:31 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/16 16:18:31 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t num)
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

void *memchr(const void *ptr, int value, size_t num)
{
    int				kk;
    unsigned char	*result;
    unsigned char	*nptr;

    kk = 0;
	nptr = ptr;
    result = NULL;
    while (kk < num)
    {
        if (nptr[kk] == c)
            result = (nptr + kk);
        kk++;
    }
    return (result);
}
