/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:39:32 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 14:43:47 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	'Strrchr()' (string reverse character) locates the last occurrence of 'c'
**	(converted to 'char') in the string pointed by 's'. Returns pointer to the
**	character or NULL if the character does not appear in string.
*/	

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int )ft_strlen(s);
	while (len >= 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)s + len);
	else
		return (NULL);
}
