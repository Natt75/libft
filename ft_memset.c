/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:25:21 by luiglesi          #+#    #+#             */
/*   Updated: 2023/09/22 13:57:56 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned int	b2;

	i = 0;
	b2 = (unsigned char *)b;
	while (i < len)
	{
		b2[i] = (unsigned char *)c;
		i++;
	}
	return (b);
}
