/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:34:11 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 14:33:19 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	'Strstr()' (string string) locates the first occurrence of string 'needle'
**	in string 'haystack'. Returns pointer to the first character of the first
**	occurrence of 'needle'. If 'needle' is empty returns 'haystack', and if
**	'needle' doesn't occur anywhere, returns NULL.
*/	

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	i2;

	i = 0;
	if (*needle == '\0' && *haystack == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		i2 = 0;
		while (needle[i2] != '\0' && haystack[i + i2] == needle[i2])
				i2++;
		if (needle[i2] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
