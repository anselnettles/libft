/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:28:50 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 16:47:14 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Putstr()' (Put string) prints the string stored in *s address memory
**	while the array still contains information, by appyling the length,
**	measured by 'ft_strlen()', into 'write()''s character length argument.
*/

void	ft_putstr(const char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
