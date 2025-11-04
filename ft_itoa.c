#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int	ft_count_int(int n)
{
	int len;

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
char	*reverse_tab(char *str)
{
	size_t i;
	size_t temp;
	size_t end;

	end = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i++;
	while (i < end / 2)
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
	int len;
	int i;
	char *res;
	char c;
	long	nb;

	len = 0;
	i = 0;
	nb = n;
	if (nb < 0 || nb == 0)
	{
		if (nb == 0)
		{
			res = malloc(sizeof(char) * 2);
			if (!res)
				return (NULL);
			res[0] = '0';
			res[1] = '\0';
			return (res);
		}
		len++;
	}
	len += ft_count_int(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
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
	res = reverse_tab(res);
	return (res);
}
#include <stdio.h>
int main(void)
{
	char *res = ft_itoa(-1234);
	printf("%s", res);
}