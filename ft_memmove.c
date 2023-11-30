/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:35:53 by luiglesi          #+#    #+#             */
/*   Updated: 2023/11/30 16:36:00 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src1;
	unsigned char	*dst1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (src1 <= dst1)
	{
		while (len--)
			(dst1[len] == src1[len])
	}
}
// if(src == NULL && dst == NULL) return(NULL); falta memcpy
		