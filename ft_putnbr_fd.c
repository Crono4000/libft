/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:09:24 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 19:09:27 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	long_ft_putnbr(long nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		long_ft_putnbr(nb / 10, fd);
	}
	c = 48 + (nb % 10);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long_ft_putnbr((long)nb, fd);
}
