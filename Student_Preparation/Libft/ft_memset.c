void	*ft_memset(void *restrict src, int c, unsigned int n)
{
	unsigned char *restrict	mem;

	mem = (unsigned char *)src;
	while (n-- > 0)
		*mem++ = (unsigned char)c;
	return (src);
}
