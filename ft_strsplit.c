/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:14:23 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 13:58:16 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strsplit()' (string split) allocates memory and returns a table of strings
**	after splitting given source '*s' by every given character 'c'. If the
**	allocation fails it should return 'NULL'.
**	The file runs in three parts: a function for word counting, a function for
**	duplicating strings, and finally, the string splitter itself.
**	We apply a static variable in use for the word count as ways of getting
**	around not having to use a global variable and be able to and be able to
**	maintain a sattue of value in-between invocations.
*/

static size_t	ft_wordcount(char const *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	i2;
	size_t	i3;
	char	**dst;

	if (s == NULL)
		return (NULL);
	i = 0;
	i3 = 0;
	dst = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (dst == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		i2 = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > i2)
			dst[i3++] = ft_strndup(s + i2, i - i2);
	}
	dst[i3] = NULL;
	return (dst);
}
