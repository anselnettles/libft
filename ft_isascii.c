/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:29:06 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 14:22:40 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'IsASCII()' checks whether the applied character is any ASCII character,
**	between octals 0000 and 0177 or not.
**	Returns 0 if false and non zero if true.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
