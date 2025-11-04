/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:09:23 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/26 16:08:05 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (sr > ds)
	{
		i = 0;
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			ds[i - 1] = sr[i - 1];
			i--;
		}
	}
	return (dst);
}
