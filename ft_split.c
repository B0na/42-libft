/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonamic <ebonamic@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:34:07 by ebonamic          #+#    #+#             */
/*   Updated: 2021/09/27 20:42:54 by ebonamic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	quantity_string(char const *str, char del);
static void		auxiliary_split(char const *s, char c, char **array);

char	**ft_split(char const *s, char c)
{
	char	**aux_arr;

	if (s == NULL)
		return (NULL);
	aux_arr = ft_calloc(quantity_string(s, c) + 1, sizeof(char *));
	if (aux_arr == NULL)
		return (NULL);
	auxiliary_split(s, c, aux_arr);
	return (aux_arr);
}

static void	auxiliary_split(char const *s, char c, char **array)
{
	size_t	i;
	size_t	char_i;
	size_t	array_i;

	i = 0;
	array_i = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			char_i = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				char_i++;
			}
			array[++array_i] = ft_calloc(char_i + 1, sizeof(char));
			ft_strlcpy(array[array_i], &s[i - char_i], char_i + 1);
		}
	}
}

static size_t	quantity_string(char const *str, char del)
{
	size_t	quantity_str;
	size_t	i;

	quantity_str = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (del == str[i])
		{
			i++;
		}
		else
		{
			while (str[i] != del && str[i] != '\0')
			{
				i++;
			}
			quantity_str++;
		}
	}
	return (quantity_str);
}
