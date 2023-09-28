void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, unsigned int n)
{
	unsigned char a;
	unsigned char *restrict d;
	unsigned char *restrict s;

	a = (unsigned char)c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
	{
		*d++ = *s;
		if (*s++ == a)
			return ((void *)(d));
	}
	return ((void *)0);
}
