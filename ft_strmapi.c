/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 21:10:25 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/21 16:31:02 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sn;

    i = 0;
	sn = ft_strdup(s);
	while (sn[i])
    {
		sn[i] = f(i, sn[i]);
        i++;
    }
	return (sn);
}
