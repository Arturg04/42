void	*ft_memcpy(void *restrict dest, void const *restrict src, unsigned int n)
{
	unsigned char *restrict	s;
	unsigned char *restrict	d;
	unsigned int			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
