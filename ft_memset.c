/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:25:21 by luiglesi          #+#    #+#             */
/*   Updated: 2023/09/20 14:44:41 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned int	b2;

	i = 0;
	b2 = (unsigned char*)b;
	while (i < len)
	{
		b2[i] = c;
		i++;
	}
	return (b);
}
