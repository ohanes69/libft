/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:46:12 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/26 18:24:03 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*p;

	if (count == 0 || size == 0)
	{
		p = malloc(0);
		if (!p)
			return (NULL);
		return (p);
	}
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (count * size));
	return ((void *)p);
}
