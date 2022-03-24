#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)b;
	while (i != len)
	{
		j[i] = c;
		i++;
	}
	return (j);
}
