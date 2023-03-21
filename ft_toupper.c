/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:27:11 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 15:56:02 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Toupper()' (To upper case) check whether the applied character is a
**	lower case alphabet character and if so, converts it to the correspondive
**	upper case character by lowering the decimal number in question.
**	In case of failure, returns the original character.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
