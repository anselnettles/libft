/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:28:08 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:42 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAXIMUM 9223372036854775807

/*
**	'AtoI()' (ASCII to integer) converts the applied character number
**	string into an integer value.
**	When it comes to overly long number strings, for the function to behave the
**	same way as the original 'atoi()', we have defined a number maximum.
**	The first condition (line 42) ascertains if the first character is
**	a white space, hor. tab, newline, vert. tab, form feed or carriage return
**	and increments to the next character, until not the case.
**	The second condition (line 44) checks whether the number begins with a
**	minus sign and applies the integer 'if_negative' to (-1), if so.
**	The third condition (line 46) skips ahead of the string if more minus or
**	plus signs are found.
**	Finally, the fourth condition (line 48) applies the found digit numbers
**	into integer 'result' one digit at a time while incrementing through
**	the string. In case the number is larger than the defined 'MAXIMUM' it will
**	be returned the way the original 'atoi()' does.
**	The result is then returned after being factored with the integer
**	of 'if_negative'.
*/

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					if_negative;

	result = 0;
	if_negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		if_negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (int)*str - '0';
		str++;
		if (result >= MAXIMUM && if_negative == 1)
			return (-1);
		else if (result > MAXIMUM && if_negative == -1)
			return (0);
	}
	return ((int)result * if_negative);
}
