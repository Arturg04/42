#ifndef LIBFT_H
# define LIBFT_H

# define NULL ((void *)0)

void	ft_bzero(void *src, unsigned int n);

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n);

void	*ft_memchr(const void *restrict src, int c, unsigned int n);

int		ft_memcmp(const void *restrict str1, const void *restrict str2, unsigned int n);

void	*ft_memcpy(void *dest, void *src, unsigned int n);

void	*ft_memmove(void *restrict dest, const void *restrict src, unsigned int n);

void	*ft_memset(void *src, int c, unsigned int n);

unsigned int	ft_strlcpy(char *restrict dest, const char *restrict src, unsigned int size);

unsigned int	ft_strlen(const char *restrict str);

#endif
