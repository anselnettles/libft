/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:34:46 by aviholai          #+#    #+#             */
/*   Updated: 2023/03/21 13:27:25 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strnew()' (string new) allocates and returns a new string the size of
**	the applied the parameter 'size' + 1.
*/

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}
