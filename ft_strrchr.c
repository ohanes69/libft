/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:07:31 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/25 17:42:17 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
