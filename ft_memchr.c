#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i != n)
	{
		if (x[i] == (unsigned char) c)
			return ((unsigned char *)x + i);
		i++;
	}
	return (NULL);
}
