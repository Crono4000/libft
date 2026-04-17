/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstuff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:21:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/17 18:28:41 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	current;

	if (fd < 0)
		return ;
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
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		long_ft_putnbr(nb / 10);
	}
	c = 48 + (nb % 10);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (fd < 0)
		return ;
	long_ft_putnbr((long) nb, fd);
}
