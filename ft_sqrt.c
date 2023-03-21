/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:15:05 by aviholai          #+#    #+#             */
/*   Updated: 2022/06/07 15:29:23 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int number)
{
	float	temporary;
	float	squareroot;

	squareroot = number / 2;
	temporary = 0;
	while (squareroot != temporary)
	{
		temporary = squareroot;
		squareroot = (number / temporary + temporary) / 2;
	}
	return (squareroot);
}
