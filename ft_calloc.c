/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:29:47 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/21 20:29:48 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*dst;
	size_t	tot_size;

	tot_size = nmeb * size;
	dst = malloc(tot_size);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, tot_size);
	return (dst);
}
