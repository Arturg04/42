void	ft_bzero(void *restrict src, unsigned int n)
{
	unsigned char *restrict	s;
	unsigned int			i;

	s = (unsigned char *)src;
	i = 0;
	while (i < n)
		s[i++] = 0;
}
