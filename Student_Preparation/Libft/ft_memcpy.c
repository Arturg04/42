void	*ft_memcpy(void *restrict dest, void const *restrict src, unsigned int n)
{
	unsigned char *restrict	s;
	unsigned char *restrict	d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
