/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:15:59 by luiglesi          #+#    #+#             */
/*   Updated: 2023/10/05 18:38:42 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	val;
	int	less;

	i = 0;
	val = 0;
	less = 0;
	while ((str[i] == ' ') || (str[i] >= 9)
		&& (str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less = -1;
		++i;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		val = val * 10 + (str[i] - '0');
		i++;
	}
	if (less == -1)
		val = val * less;
	return (val);
}

/*  int main()
{
	printf("%d\n", ft_atoi("\r\v\t\n -123"));
	printf("%d\n", ft_atoi(" ?123"));
	
	
	printf("%d\n", atoi("\r\v\t\n -123"));
	printf("%d\n", atoi(" ?123"));
} */