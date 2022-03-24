#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		while (n != 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
			n--;
		}
	}
	else
	{
		while (n != 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
