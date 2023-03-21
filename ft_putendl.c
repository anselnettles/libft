/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:30:49 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:47:36 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putendl()' (Put end line) prints the string stored in *s address memory
**	while the array still contains information by appyling the length,
**	measured by 'ft_strlen()', into 'write()''s character length argument.
**	Prints newline when done.
*/

void	ft_putendl(const char *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		write (1, "\n", 1);
	}
}
