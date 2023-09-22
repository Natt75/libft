/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:15:59 by luiglesi          #+#    #+#             */
/*   Updated: 2023/09/21 14:43:13 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	val;	

	i = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		val = val * 10 + (str[i] - '0');
			i++;
	}
	return (val);
	if (str[i] >= 65 && str[i] <= 122)
		return (0);
}
/* int main()
{
    char num[] = "AAA12345";
	printf("%d", ft_atoi(num));

} */