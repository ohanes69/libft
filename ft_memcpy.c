/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:40:52 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/25 17:43:42 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*sr;
	unsigned char		*ds;
	size_t				i;

	sr = (const unsigned char *)src;
	ds = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
