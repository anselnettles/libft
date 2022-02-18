/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:15:30 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/18 13:38:15 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	'Strnstr()' (string number string) locates the first occurrence of string 
**	'needle' in string 'haystack', with the length of 'len'.
**	Returns pointer to the first character of the first
**	occurrence of 'needle'. If 'needle' is empty returns 'haystack', and if
**	'needle' doesn't occur anywhere, returns NULL.
*/	

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		i2 = 0;
		while ((i + i2 < len) && (haystack[i + i2] == needle[i2])
			&& (needle[i2] != '\0'))
		{
			i2++;
		}
		if (needle[i2] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
