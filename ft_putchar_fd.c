/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:34:47 by aviholai          #+#    #+#             */
/*   Updated: 2022/01/19 16:43:19 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putchar_fd' (Put character file descriptor) is the same as the library's
**	regular 'ft_putchar' except here we require the argument's file descriptor
**	of where to write the output.
**	The 'write' function requires the UNIX standard library 'unistd.h'.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
