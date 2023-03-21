/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:53:22 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/04 15:45:18 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Memcmp()' (memory compare) function compares byte string 's1' against
**	byte string 's2'. Both strings are assumed to be 'n' bytes long. Returns
**	zero if the two strings are identical, otherwise returns the difference
**	between the first two differing bytes.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*string1;
	char	*string2;
	size_t	i;

	i = 0;
	string1 = (char *)s1;
	string2 = (char *)s2;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i++;
	}
	return (0);
}
