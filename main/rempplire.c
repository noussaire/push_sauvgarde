/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rempplire.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/01 15:31:51 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

void	remplire_stack_a(t_data *information, char **argv, int format)
{
	int i;

	i = 0;
	if (format == 1)
	{
		while (i < information->total_numbers)
		{
			information->stack_a[i] = ft_atoi(argv[i]);
			i++;
		}
	}
	else
	{
		while (i < information->total_numbers)
		{
			information->stack_a[i] = ft_atoi(argv[i + 1]);
			i++;
		}
	}
}