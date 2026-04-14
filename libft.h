/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:44:04 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/14 17:50:52 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);