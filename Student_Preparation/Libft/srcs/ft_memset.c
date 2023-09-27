void	*ft_memset(void *restrict src, int c, unsigned int n)
{
	unsigned int			i;
	unsigned char *restrict	mem;

	mem = (unsigned char *)src;
	i = 0;
	while (i < n)
		mem[i++] = (unsigned char)c;
	return (src);
}
