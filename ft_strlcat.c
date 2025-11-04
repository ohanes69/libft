/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:04:17 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/26 16:37:15 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	j_final;

	i = 0;
	j = 0;
	j_final = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (j < dstsize && dst[j])
	{
		j++;
		j_final++;
	}
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	while (src[i] && i < dstsize - 1 - j)
	{
		dst[j_final] = src[i];
		i++;
		j_final++;
	}
	dst[j_final] = '\0';
	return (ft_strlen(src) + j);
}
