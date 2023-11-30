/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:54:42 by luiglesi          #+#    #+#             */
/*   Updated: 2023/11/30 14:17:35 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//DESCRIPTION
//la funcion memcpy() function copia n bytes de src a dst 
#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned int = i;
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src[i]);
		i++;
	}
	return (dst);
}
//le doy valor a dst y a src un valor
/*
unsigned char	*src1;
	unsigned char	*dst1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	 while (i < n)
	 dst1[i] = src1[i]
		i++;
	return(dst);
*/