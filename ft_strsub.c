/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:23:16 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/10 14:43:48 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strsub()' (substring) creates a new string of an applied string, beginning
**	from the mark of integer 'start', the length of size_t 'len'.
**	Enough memory is allocated for the substring by the size of 'len' plus one.
**	If allocation fails it will return NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	index;

	if (s)
	{
		substring = (char *)malloc(sizeof(char) * len + 1);
		if (substring == NULL)
			return (NULL);
		index = 0;
		while (index < len)
		{
			substring[index] = s[start + index];
			index++;
		}
		substring[index] = '\0';
		return (substring);
	}
	return (NULL);
}
