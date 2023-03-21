/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:21:42 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:37:51 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strclr()' (String clear) counts the length of a string applied as a 
**	parameter and clears it with the value of '\0'.
*/

void	ft_strclr(char *s)
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
			s[i++] = '\0';
	}
}
