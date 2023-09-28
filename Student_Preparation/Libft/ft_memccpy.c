void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, unsigned int n)
{
	unsigned char a;
	unsigned char *restrict d;
	unsigned char *restrict s;

	a = (unsigned char)c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		d[n] = s[n];
		if (s[n] == a)
			return ((void *)(dest + n));
	}
	return ((void *)0);
}
