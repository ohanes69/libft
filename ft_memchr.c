/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:44:57 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/20 16:54:32 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*t;

	d = (unsigned char)c;
	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*t == d)
			return ((void *)t);
		t++;
		i++;
	}
	return (NULL);
}
