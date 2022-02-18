/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:46:54 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/04 15:43:08 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Memchr()' (memory character) function locates the first occurrence of 'c'
**	(converted to an unsigned char) in string 's', and returns a pointer to the
**	byte located, or 'NULL' if no such byte exists within 'n' bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s2[i] == (unsigned char)c)
			return ((char *)s2 + i);
		i++;
	}
	return (NULL);
}
