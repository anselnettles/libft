/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:06:21 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 12:57:17 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Isalnum()' (Is alphabet number) checks whether the applied character is
**	either an alphabet character or a decimal digit or not.
**	Returns 0 if false and non zero if true.
**	See functions 'isalpha()' and 'isdigit()' for further information.
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
