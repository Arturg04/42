void	*memchr(const void *restrict src, int c, unsigned int n)
{
	unsigned char *restrict s;

	s = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*s++ == (unsigned char)c)
			return (--s);
	}
	return ((void *)0);
}
