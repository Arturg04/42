/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:51:01 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/03 16:54:49 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

void			ft_bzero(void *src,
					unsigned int n);

void			*ft_memccpy(void *dest,
					const void *src,
					int c,
					unsigned int n);

void			*ft_memchr(const void *src,
					int c,
					unsigned int n);

int				ft_memcmp(const void *str1,
					const void *str2,
					unsigned int n);

void			*ft_memcpy(void *dest,
					void const *src,
					unsigned int n);

void			*ft_memmove(void *dest,
					const void *src,
					unsigned int n);

void			*ft_memset(void *src,
					int c,
					unsigned int n);

char			*ft_strchr(const char *str,
					int c);

unsigned int	ft_strlcat(char *dst,
					const char *src,
					unsigned int size);

unsigned int	ft_strlcpy(char *dest,
					const char *src,
					unsigned int size);

unsigned int	ft_strlen(const char *str);

char			*ft_strrchr(const char *str,
					int c);

char			*ft_strnstr(const char *str,
					const char *locate,
					unsigned int size);

int				ft_strncmp(const char *str,
					const char *cmp,
					unsigned int n);

int				ft_atoi(const char *nptr);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

void			*ft_calloc(unsigned int nmemb,
					unsigned int size);

char			*ft_strdup(const char *str);

#endif
