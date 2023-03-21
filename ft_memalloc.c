/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:24:13 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/04 15:37:59 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Memalloc()' (memory allocation) allocates a section of memory the size
**	of argument 'size' with the 'string.h' function 'malloc()' and uses the
**	library function 'memset()' to set its area to '0'. 
**	The first process is a failsafe. If allocation fails, returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*area;

	area = malloc(size);
	if (area == NULL)
		return (NULL);
	ft_memset(area, 0, size);
	return (area);
}
