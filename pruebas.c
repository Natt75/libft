/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:32:41 by luiglesi          #+#    #+#             */
/*   Updated: 2023/09/22 13:56:36 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_atoi(const char *str) // 13 => -13
{
	int	i;
	int	val;
	int less;

	i = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            less = -1;
        }
        ++i;
    }
	if (str[i] >= 65 && str[i] <= 122)
		return (0);
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		val = val * 10 + (str[i] - '0');
			i++;
	}
	if (less == -1)
		val = val * less;
	return (val);
}
