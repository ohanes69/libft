/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:26:22 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/25 17:43:33 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s11[i] == s22[i])
		i++;
	return (s11[i] - s22[i]);
}
