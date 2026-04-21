/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:31:52 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/21 16:04:55 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
        result = (result * 10) + (str[i++] - '0');
    return (sign * result);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("  -22341"));
	printf("%d\n", ft_atoi("340000"));
	printf("%d\n", ft_atoi("999999999"));
	printf("%d\n", ft_atoi("--+503"));
}*/