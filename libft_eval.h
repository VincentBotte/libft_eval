/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_eval.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:02:38 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/21 12:45:56 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *pointer, size_t number);
void			*ft_calloc(size_t num, size_t size);
int				ft_isalnum(int character);
int				ft_isalpha(int character);
int				ft_isascii(int character);
int				ft_isdigit(int character);
int				ft_isprint(int character);
void			*ft_memccpy(void *dest, const void *src, int character, size_t number);
void			*ft_memchr(const void *pointer, int value, size_t num);
int				ft_memcmp(const void *s1, const void *s2, size_t number);
void			*ft_memcpy(void *destination, const void *source, size_t number);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *pointer, int value, size_t number);
char			*ft_strchr(const char *str, int character);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, size_t len);
char			*ft_strrchr(const char *str, int character);
int				ft_tolower(int character);
int				ft_toupper(int character);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unisgned int, char));
