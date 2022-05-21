/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkoper <rkoper@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 16:11:29 by rkoper        #+#    #+#                 */
/*   Updated: 2022/05/21 21:55:58 by rkoper        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
