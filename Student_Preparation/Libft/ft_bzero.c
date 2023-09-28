void	ft_bzero(void *restrict src, unsigned int n)
{
	unsigned char *restrict	s;

	s = (unsigned char *)src;
	while (n-- > 0)
		*s++ = 0;
}
