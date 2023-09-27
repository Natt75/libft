/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:16:21 by luiglesi          #+#    #+#             */
/*   Updated: 2023/09/27 16:27:17 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen= ft_strlen(src);
	dstlen = ft_strlen(dst);
	while (dstlen >= dstsize)
	{
		total = dstlen + srclen;
	}
	return (total);
}

/* 

Natanael del futuro(esta tarde)
mira la libreta para ver como se hace bien
aca nos dejo la pista
suerte ;D
char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
} */
