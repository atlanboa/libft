/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:14:47 by sangh             #+#    #+#             */
/*   Updated: 2020/12/21 19:46:23 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>
# include "stdlib.h"
# include "unistd.h"
# include "libgen.h"
# include "fcntl.h"
# include "errno.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_is_negative(int n);
void	ft_putnbr(int n);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, size_t n);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
size_t	ft_strlcat(char *dst, char *src, size_t detsize);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strstr(char *str, char *to_find);
void	ft_memeset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

#endif
