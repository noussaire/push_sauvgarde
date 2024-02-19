/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_v_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:42:38 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:51:53 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/libft.h"

size_t	ft_strlen_v_2(const char *s)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			j++;
		i++;
	}
	k = ft_strlen(s) - j;
	return (k);
}