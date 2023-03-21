/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:06 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/08 14:40:03 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Memcpy' (memory copy) function copies 'n' amount of bytes from memory area
**	'src' to memory area 'dst'. If 'dst' and 'src' overlap, behavior is
**	undefined.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	s1 = (char *)dst;
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}
