/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:34:42 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:43:00 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strmapi()' (string map index) applies the parameter function 'f' to each
**	character of specific index of the applied *string 's' to create a new
**	string, which is a result of running the function on 's'.
**	Returns the modified string.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s)
	{
		i = 0;
		str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
		if (str == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
