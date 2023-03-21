/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:37:09 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 14:06:17 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putnbr()' (Put number) writes the applied parameter 'nb' as a character
**	string.
**	The first condition (line 33) checks if nb is the furthest possible
**	negative integer from 0, and if so, prints the first two characters,
**	and then performs the rest of the calculation loops for the remainder
**	of the number. This is due to asymmetrical scope of the int space.
**	In case of a standard negative number, the second condition (line 39)
**	removes the first character, '-', and converts the rest for positive.
**	In the third condition (line 44), a number greater than 9 is placed on
**	a recursive calculation loop to be dismantled for its remainder and
**	modulo of 10.
**	Finally, in the last condition the the single digit number will be
**	printed in char type space.
*/

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		(nb = 147483648);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar((char) nb + '0');
	}
}
