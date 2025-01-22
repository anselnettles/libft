/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:38:06 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/04 16:48:46 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strdel()' (string delete) frees and 'NULL's the appointed character table.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
