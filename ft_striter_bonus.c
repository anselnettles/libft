/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:21:10 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:39:03 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Striter()' (String iterate) applies the parameter function 'f' to each
**	character of the string argument '*s'. Each character is passed by address
**	to 'f' to be modified if necessary.
*/

void	ft_striter(char *s, void (*f)(char *s))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(s + i);
			i++;
		}
	}
}
