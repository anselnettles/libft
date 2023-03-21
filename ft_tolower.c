/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:33:49 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 15:56:29 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Tolower()' (To lower case) check whether the applied character is a
**	upper case alphabet character and if so, converts it to the correspondive
**	lower case character by incrementing the decimal number in question.
**	In case of failure, returns the original character.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
