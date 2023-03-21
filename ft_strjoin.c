/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:16:06 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:45:47 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strjoin()' (string join) function concatenates together two strings,
**	'*s1' and '*s2'. The new string should be properly memory allocated, ending
**	with '\0'. Returns 'NULL' if allocation fails.
**	Measures the length of both of the strings with 'strlen()' for allocation.
**	Applies the 's1' string to the newly 'char' string 'str' one character at
**	a time. Once finished, applies the 's2' string to the end.
**	Finishes the last index slot with '\0' and returns the result.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	i2 = 0;
	while (s2[i2] != '\0')
	{
		str[i + i2] = s2[i2];
		i2++;
	}
	str[i + i2] = '\0';
	return (str);
}
