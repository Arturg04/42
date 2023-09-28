void *ft_memmove(void *restrict dest, const void *restrict src, unsigned int n)
{
	unsigned char *restrict	s;
	unsigned char *restrict	d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s > d)
	{
		while (n-- > 0)
			*d++ = *s++;
		return (dest);
	}
	d += n;
	s += n;
	while (n-- > 0)
		*d-- = *s--;
	return (dest);
}
