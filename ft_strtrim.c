/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:42:05 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 15:55:37 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strtrim()' (string trim) allocates memory for for a copy of the applied
**	string 's' and trims all the whitespaces from the beginning and of the
**	string and then returns it. If allocation fails, returns 'NULL'.
**	Uses the contributing functions 'ft_startfinder()' and 'ft_endfinder()' to
**	measure an index for when the whitespace ends and starts for the string.
*/

static int	ft_startfinder(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
			return (index);
		index++;
	}
	return (-1);
}

static int	ft_endfinder(const char *s)
{
	int	index;

	index = ft_strlen(s) - 1;
	while (index > 0)
	{
		if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
			return (index);
		index--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		start_mark;
	int		end_mark;

	if (s == NULL)
		return (NULL);
	start_mark = ft_startfinder(s);
	end_mark = ft_endfinder(s);
	if (end_mark == -1 || start_mark == -1)
		return (ft_strnew(0));
	result = ft_strsub(s, start_mark, end_mark - start_mark + 1);
	return (result);
}
