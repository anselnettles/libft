/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:27:17 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:42:03 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strmap()' (string map) applies the parameter function 'f' to each
**	character of the applied *string 's' to create a new string, which is
**	a result of running the function on 's'. Returns the modified string.
*/

char	*ft_strmap(char const *s, char (*f)(char))
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
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
