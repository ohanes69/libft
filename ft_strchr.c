/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:44:02 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/23 19:03:46 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
