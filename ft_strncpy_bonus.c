/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:52:19 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/15 15:45:23 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strncpy()' (String number copy) makes a copy of the second parameter string
**	(char *src) into the first parameter (char *dst), the size of 'n'.
**	A NULL termination ('\0')  is added into the newly written 'dst'.
*/

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src)
	{
		while (src[i] && i < n)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < n)
			dst[i++] = '\0';
	}
	return (dst);
}
