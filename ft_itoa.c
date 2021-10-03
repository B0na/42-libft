/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:40:48 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/23 12:52:53 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*aux;
	size_t	len;
	long	nb;

	nb = n;
	len = numlen(n);
	aux = malloc(sizeof(char) * (len + 1));
	if (aux == 0)
		return (NULL);
	if (nb < 0)
	{
		aux[0] = '-';
		nb = -nb;
	}
	aux[len--] = '\0';
	if (nb == 0)
		aux[0] = '0';
	while (nb)
	{
		aux[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (aux);
}
