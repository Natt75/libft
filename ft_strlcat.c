/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiglesi <luiglesi@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:16:21 by luiglesi          #+#    #+#             */
/*   Updated: 2023/11/28 14:34:39 by luiglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == 0 || dst == 0)
		return (0);
	else
		while (dst[i] != '\0' )
			i++;
	while (src[j] != '\0' )
		j++;
	if (j > dstsize)
		return (i + j);
}
/*
int main() {
    
    char a[]  ="1234567891";
    char b[]  ="1235";

    printf("%zu", ft_strlcat(a, b, 4));
}*/
