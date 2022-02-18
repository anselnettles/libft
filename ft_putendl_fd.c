/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:37:18 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/17 14:17:50 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putendl_fd()' (Put end line file descriptor) prints the string stored in
**	*s address memory, in the applied file descriptor, while the array still
**	contains information by appyling the length, measured by 'ft_strlen()',
**	into 'write()''s character length argument. Prints newline when done.
*/

void	ft_putendl_fd(const char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}
