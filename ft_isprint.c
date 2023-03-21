/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:48:27 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 14:23:23 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Isprint()' (Is printable) check whether the applied character is printable
**	or not, by comparing the applied parameter 'c' to the ASCII table.
**	Returns 0 if false and non zero if true.
*/

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
