/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:17:41 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/14 21:32:04 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*str_end;
	size_t		i;
	size_t		j;

	if (c > 127)
		c %= 256;
	str_end = str;
	i = 0;
	j = 0;
	while (str_end[i] != '\0')
		i++;
	while (str_end[i] != str[j])
	{
		if (str_end[i] == c)
			return ((char *)str_end + i);
		i--;
	}
	if (str_end[i] == c)
		return ((char *)str_end + i);
	return (0);
}
