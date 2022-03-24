#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(s);
	ch = c;
	while (s[i] != ch)
	{
		if (s[i] == s[0])
			return (NULL);
		i--;
	}
	return ((char *)(s + i));
}
