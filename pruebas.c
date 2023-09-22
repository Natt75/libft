#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	val;	

	i = 0;
	while (str[i] >= 32)
	{
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		val = val * 10 + (str[i] - '0');
			i++;
	}
	return (val);
	if (str[i] >= 65 && str[i] <= 122)
		return (0);
}

