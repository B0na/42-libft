/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:17:41 by ebonamic          #+#    #+#             */
/*   Updated: 2021/10/07 20:20:13 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int) ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
