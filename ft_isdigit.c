/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:29:37 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 14:23:00 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Isdigit()' checks whether the applied character is a decimal digit
**	character or not, by comparing the applied parameter 'c' to the ASCII table.
**	Returns 0 if false and non zero if true.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
