/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:47:50 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/13 14:27:51 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (destsize > 0)
	{
		while (src[i] != '\0' && (i < (destsize - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	if (destsize == 0)
		dest[ft_strlen(dest)] = '\0';
	while (src[i])
		i++;
	return (i);
}
