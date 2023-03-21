/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:22:19 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 13:42:10 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Memset (memory set) copies the argument 'len' amount of argument value 'c'
**	to a newly created char string 's' pointed by the argument '*b'.
**	Returns the argument 'b'.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len > 0)
	{
		s[len - 1] = (char )c;
		len--;
	}
	return (b);
}
