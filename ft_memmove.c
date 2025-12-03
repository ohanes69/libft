/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:45:19 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/20 16:54:54 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_srcsup(unsigned char *ds, const unsigned char *sr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ds[i] = sr[i];
		i++;
	}
}

static void	ft_dstsup(unsigned char *ds, const unsigned char *sr, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		ds[i - 1] = sr[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	if (!src && !dst)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (sr > ds)
		ft_srcsup(ds, sr, len);
	else
		ft_dstsup(ds, sr, len);
	return (dst);
}
