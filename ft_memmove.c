/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:32:14 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/08 15:12:05 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Memmove()' (memory move) function copies 'len' bytes from string 'src' to
**	string 'dst' and returns the 'dst'. The two strings may overlap;
**	the copy is always done in a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		tmp = (unsigned char *)dst;
		while (len--)
			tmp[len] = *(unsigned char *)(src + len);
	}
	return (dst);
}
