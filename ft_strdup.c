/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:18:36 by aviholai          #+#    #+#             */
/*   Updated: 2022/02/22 13:45:22 by aviholai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	'Strdup()' (String duplicate) copies and returns an applied string.
*/

char	*ft_strdup(const char *src)
{
	char			*dest;
	unsigned long	i;
	unsigned long	i2;

	i2 = 0;
	while (src[i2])
		i2++;
	dest = (char *)malloc(sizeof(*dest) * (i2 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= i2)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
