/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:10:16 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/21 17:15:59 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	b;
	char			*t;

	b = (unsigned char)c;
	t = (char *)s;
	while (*t != '\0')
	{
		if (*t == b)
			return (t);
		t++;
	}
	if (*t == b)
		return (t);
	return (NULL);
}
