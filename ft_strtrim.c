#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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

char	*ft_start(char const *s1, char const *set)
{
	size_t		i;
	size_t 		j;
	size_t		count;
	char		*s11;
	char		*sett;

	s11 = (char *)s1;
	sett = (char *)set;
	j = 0;
	while (s11[j])
	{
		i = 0;
		count = 0;
		while (sett[i])
		{
			if (sett[i] == s11[j])
				count = 1;
			i++;
		}
		if (count == 0)
			return (s11 + j);
		j++;
	}
	return (s11);
}

char    *ft_end(char *s1, char const *set)
{
    size_t        	i;
    size_t         	j;
	size_t			k;
    size_t        	count;
    char const       *s11;
    char        	*s22;
	char			*final;
    char        	*sett;

    s11 = (char const *)s1;
    sett = (char *)set;
    j = ft_strlen(s11) - 1;
	k = 0;
    s22 = (char *)s11;
    while (j > 0)
    {
        i = 0;
        count = 0;
        while (sett[i])
        {
            if (sett[i] == s22[j])
                count = 1;
            i++;
        }
        if (count == 0)
        {
			printf("%zu\n", j);
			printf("%c\n", s22[j]);
			final = malloc(sizeof(char) * (j + 2));
			while ((j + 1) > 0)
			{
				final[k] = s22[j];
				k++;
				j--;
			}
			final[k] = '\0';
			final = reverse_tab(final);
            return (final);
        }
        j--;
    }
    return (s22);
}

char     *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    char *result1;

    result = ft_start(s1, set);
    printf("%s\n", result);
    result1 = ft_end(result, set);
    printf("%s\n", result1);
    return (result1);
}

int main(void)
{
	char *res = ft_strtrim("y-jfjfa-cfjjff-y-", "-xy");

	printf("%s", res);
}