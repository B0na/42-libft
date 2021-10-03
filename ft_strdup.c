/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:54:12 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/22 19:56:09 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str) + 1;
	dup = malloc(sizeof(char) * len);
	if (dup == 0)
		return (0);
	ft_memcpy(dup, str, len);
	return (dup);
}
