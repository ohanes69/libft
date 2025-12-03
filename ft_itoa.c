/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:34:06 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/20 18:19:14 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_value_zero(long n)
{
	char	*res;

	(void)n;
	res = malloc(sizeof(char) * 2);
	if (!res)
		return (NULL);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

static size_t	ft_count_int(long n)
{
	size_t		len;

	len = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_transform_int(long nb, size_t len, char *res)
{
	char		c;
	size_t		i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		res[i] = '-';
		i++;
	}
	while (i < len)
	{
		c = (nb % 10) + '0';
		nb /= 10;
		res[i] = c;
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char	*ft_reverse_tab(char *str)
{
	size_t	i;
	char	temp;
	size_t	end;

	end = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i++;
	while (i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		end--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	char		*res;
	long		nb;

	len = 0;
	i = 0;
	nb = n;
	if (nb < 0 || nb == 0)
		len++;
	if (nb == 0)
	{
		res = ft_value_zero(nb);
		return (res);
	}
	len += ft_count_int(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = ft_transform_int(nb, len, res);
	res = ft_reverse_tab(res);
	return (res);
}
