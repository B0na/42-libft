/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:34:29 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/24 19:38:54 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (str == NULL)
		return (NULL);
	s_len = ft_strlen(str);
	if (s_len <= len)
		len = s_len - start;
	if (start > s_len)
		return (ft_strdup(""));
	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	else
		ft_strlcpy(sub, str + start, len + 1);
	return (sub);
}
