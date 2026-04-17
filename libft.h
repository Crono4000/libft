/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:44:04 by afranco-          #+#    #+#             */
/*   Updated: 2026/04/15 19:47:18 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

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
void	*ft_memmove(void *dest, const void *src, size_t n);

t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
