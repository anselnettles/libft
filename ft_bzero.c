/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:20:38 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 12:56:56 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Bzero()' (byte zero) writes an amount of 'n' zeroed bytes to the string 's'.
**	See function 'memset()' for further information.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
