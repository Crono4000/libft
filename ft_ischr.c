/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:50:07 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/14 13:19:12 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (1);
}

int	ft_isdigit(int	c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

int	ft_isalnum(int	c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

int	ft_isascii(int	c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

int	ft_isprint(int	c)
{
	if ((c >= 0 && c < 32) || c == 127)
		return (0);
	else
		return (1);
}
