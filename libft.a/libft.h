/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 17:51:30 by jihekim           #+#    #+#             */
/*   Updated: 2021/01/27 17:58:05 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/*
**	Struct
*/

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**	Part 1 - Libc functions
*/

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *ptr, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *str, int c, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t len);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *s, const char *find, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *str);

/*
**	Part 2 - Additional Functions
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**	Bonus part - Linked list
*/

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *));

#endif
