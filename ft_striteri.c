/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:24:54 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:39:46 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Striteri()' (String iterate integer) applies the parameter function
**	'f' to each character of the string argument '*s', and passing its index
**	as first argument. Each character is passed by address
**	to 'f' to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
