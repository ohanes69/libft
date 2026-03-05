/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:34:06 by samarkar          #+#    #+#             */
/*   Updated: 2026/03/05 16:19:48 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_int(long n)
{
	size_t		len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += 1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*to_str(long nb, size_t len, char *res)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = len - 1;
	if (nb < 0)
	{
		res[i] = '-';
		nb *= -1;
		i++;
	}
	while (i < len)
	{
		res[j] = (nb % 10) + '0';
		nb /= 10;
		j--;
		i++;
	}
	res[len] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*res;
	long		nb;

	nb = n;
	len = ft_count_int(n);
	i = 0;
	j = len - 1;
	res = malloc(sizeof(char) * len);
	if (nb == 0)
	{
		res[i] = '0';
		res[i + 1] = '\0';
		return (res);
	}
	res = to_str(nb, len, res);
	return (res);
}
