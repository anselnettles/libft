/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:18:43 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/17 14:55:29 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strlcat()' (string length concatenate) appends the string 'src'
**	parameter to the end of the string 'dst' by the size of 'dstsize' and
**	returns the total length.
**	The string should be properly NUL-terminated.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (i < dstsize && dst[i])
		i++;
	i2 = 0;
	while ((src[i2]) && ((i + i2 + 1) < dstsize))
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	if (i != dstsize)
		dst[i + i2] = '\0';
	return (i + ft_strlen(src));
}
