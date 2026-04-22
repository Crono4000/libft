/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:05:37 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/21 18:13:16 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		ft_putchar_fd(str[current], fd);
		current++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

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
	long_ft_putnbr((long) nb, fd);
}
