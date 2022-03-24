#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	int	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && (int)start < ft_strlen(s))
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
