/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shatan <shatan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:46:36 by shatan            #+#    #+#             */
/*   Updated: 2024/04/18 18:32:40 by shatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


typedef struct s_base
{
	size_t		nbr;
	const char	*str;
}	t_base;


void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
void	ft_swap(void *a, void *b, size_t size);
void	ft_int_swap(int *a, int *b);
void	ft_char_swap(char *a, char *b);
char	*ft_strrev(char *s);
char	*ft_strnrev(char *s, size_t n);
void	ft_tokens_free(char **tokens);
size_t	ft_tokens_len(char **tokens);
char	**ft_str_to_args(const char *str, int *argc);
t_base	ft_init_base(const char *base);
long	ft_strtol(const char *_str, char **endptr, const char *_base);

#endif  //COMMON