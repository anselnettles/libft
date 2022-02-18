/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:42:08 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/04 15:57:26 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putchar()' (Put character) is your most basic remote 'write' C system call.
**	The 'write' function requires the UNIX standard library 'unistd.h'.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
