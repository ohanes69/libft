/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:11:09 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/20 16:58:42 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*t;
	unsigned char	b;

	t = (char *)s;
	b = (unsigned char)c;
	while (*t != '\0')
		t++;
	while (*t != b && t > s)
		t--;
	if (*t == b)
		return (t);
	return (NULL);
}
