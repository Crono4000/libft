/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:50:07 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/22 14:29:03 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (1);
}

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

int	ft_isprint(int c)
{
	if ((c >= 0 && c < 32) || c == 127)
		return (0);
	else
		return (1);
}

/*int main()
{
	printf("###teste ft_isalpha###\n");
	printf("Result for a is %d.\n", ft_isalpha('a'));
	printf("Result for 2 is %d.\n", ft_isalpha('2'));
	printf("Result for B is %d.\n", ft_isalpha('B'));
	printf("\n");

	printf("###teste ft_isdigit###\n");
	printf("Result for a is %d.\n", ft_isdigit('a'));
	printf("Result for 2 is %d.\n", ft_isdigit('2'));
	printf("Result for ' ' is %d.\n", ft_isdigit(' '));
	printf("\n");

	printf("###teste ft_isalnum###\n");
	printf("Result for a is %d.\n", ft_isalnum('a'));
	printf("Result for 2 is %d.\n", ft_isalnum('2'));
	printf("Result for ' ' is %d.\n", ft_isalnum(' '));
	printf("Result for A is %d.\n", ft_isalnum('A'));
	printf("\n");

	printf("###teste ft_isascii###\n");
	printf("Result for \\x80 is %d.\n", ft_isascii('\x80'));
	printf("Result for 2 is %d.\n", ft_isascii('2'));
	printf("Result for ' ' is %d.\n", ft_isascii(' '));
	printf("Result for \\xA1 is %d.\n", ft_isascii('\xA1'));
	printf("Result for \\x00 is %d.\n", ft_isascii('\x00'));
	printf("\n");

	printf("###teste ft_isprint###\n");
	printf("Result for \\x80 is %d.\n", ft_isprint('\x80'));
	printf("Result for 2 is %d.\n", ft_isprint('2'));
	printf("Result for ' ' is %d.\n", ft_isprint(' '));
	printf("Result for \\xA1 is %d.\n", ft_isprint('\xA1'));
	printf("Result for \\x09 is %d.\n", ft_isprint('\x09'));
	printf("\n");
}*/
