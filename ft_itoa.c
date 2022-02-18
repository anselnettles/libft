/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:17 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/07 13:17:56 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'ItoA()' (integer to ASCII) allocates memory and returns a string of
**	characters, terminated with a '\0', that is the 'char' equivalent of the
**	applied integer.
**	If allocation fails, this function returns 'NULL' (line 37).
**	If the applied integer is the furthest possible negative number from 0,
**	it applies it to the function 'strcpy()' and returns it (line 39).
**	In the other case of a negative number, saves the minus sign in place for
**	'char' string '*str' and applies the rest of the number recursively,
**	by applying the function 'strjoin()' (line 40)
**	If the integer is found to be a positive number greather than 9 (or, a
**	single digit number) applies a recursive loop (line 46)
**	Finally, in the case of a positive single digit number, simply applies the
**	the number to index and NULLs the end of string (line 48)
*/

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
