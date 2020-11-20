/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:08:08 by schaya            #+#    #+#             */
/*   Updated: 2020/11/20 17:55:20 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *memptr, int val, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int symbol);
char	*ft_strrchr(const char *string, int symbol);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int c);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *str);
char 	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
char 	*ft_itoa(int n);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void 	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char *s, int fd);
void 	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);

#endif
