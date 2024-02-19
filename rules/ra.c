/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:10 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:56:40 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_ra(t_data *information)
{
	int	tmp;
	int	i;

	write(1, "ra\n", 3);
	i = 0;
	tmp = information->stack_a[0];
	while (i < information->count_stack_a)
	{
		if (i != information->count_stack_a - 1)
			information->stack_a[i] = information->stack_a[i + 1];
		else
			information->stack_a[i] = tmp;
		i++;
	}
}

void	r_a(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_ra(information);
		i++;
	}
}
