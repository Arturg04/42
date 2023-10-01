/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:51:01 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/01 20:25:14 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void			ft_bzero(void *restrict src,
					unsigned int n);

void			*ft_memccpy(void *restrict dest,
					const void *restrict src,
					int c,
					unsigned int n);

void			*ft_memchr(const void *restrict src,
					int c,
					unsigned int n);

int				ft_memcmp(const void *restrict str1,
					const void *restrict str2,
					unsigned int n);

void			*ft_memcpy(void *restrict dest,
					void const *restrict src,
					unsigned int n);

void			*ft_memmove(void *restrict dest,
					const void *restrict src,
					unsigned int n);

void			*ft_memset(void *restrict src,
					int c,
					unsigned int n);

char			*ft_strchr(const char *restrict str,
					int c);

unsigned int	ft_strlcat(char *restrict dst,
					const char *restrict src,
					unsigned int size);

unsigned int	ft_strlcpy(char *restrict dest,
					const char *restrict src,
					unsigned int size);

unsigned int	ft_strlen(const char *restrict str);

char			*ft_strrchr(const char *restrict str,
					int c);

char			*ft_strnstr(const char *restrict str,
					const char *restrict locate,
					unsigned int size);

int				ft_strncmp(const char *restrict str,
					const char *restrict cmp,
					unsigned int n);

int				ft_atoi(const char *restrict nptr);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

void			*ft_calloc(unsigned int nmemb,
					unsigned int size);

char			*ft_strdup(const char *restrict str);

#endif
