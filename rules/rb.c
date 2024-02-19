/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:16:10 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:34 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_rb(t_data *information)
{
	int	tmp;
	int	i;

	write(1, "rb\n", 3);
	i = 0;
	tmp = information->stack_b[0];
	while (i < information->count_stack_b)
	{
		if (i != information->count_stack_b - 1)
			information->stack_b[i] = information->stack_b[i + 1];
		else
			information->stack_b[i] = tmp;
		i++;
	}
}

void	r_b(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_rb(information);
		i++;
	}
}
