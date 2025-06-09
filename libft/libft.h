/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:36:21 by anbellar          #+#    #+#             */
/*   Updated: 2024/11/27 18:10:37 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isalpha(int a);
int		ft_isalnum(int a);
int		ft_isprint(int a);
void	*ft_memset(void *s, int value, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *str, const char *str2, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);
int		ft_isdigit(int a);
int		ft_isascii(int c);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_tolower(int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	**ft_split(const char *str, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
