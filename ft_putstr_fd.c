#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int len;

	if (!s)
		return (ft_putstr_fd("(null)", 1));
	len = ft_strlen(s);
	i = 0;
	while (i != len)
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (i);
}
