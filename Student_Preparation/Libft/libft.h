/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:51:01 by Arturg04          #+#    #+#             */
/*   Updated: 2023/09/29 23:33:27 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


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

#endif
