/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:12:24 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 13:47:51 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strcat()' (String concatenate) appends a copy of the null-terminated string
**	's2' to the end of the string 's1' and adds an terminating '\0'.
**	String 's1' needs to have enough space to store the result. Returns result.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
