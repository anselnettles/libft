/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:35:54 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/17 15:01:14 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putnbr_fd()' (put number file descriptor) writes the applied integer 'nb'
**	to the applied file descriptor.
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

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		(nb = 147483648);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}
