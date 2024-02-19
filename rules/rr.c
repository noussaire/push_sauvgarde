/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:20 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:33 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_rb(t_data *information)
{
	int	tmp;
	int	i;

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

static void	set_ra(t_data *information)
{
	int	tmp;
	int	i;

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

static void	set_rr(t_data *information)
{
	set_ra(information);
	set_rb(information);
	write(1, "rr\n", 3);
}

void	rr(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_rr(information);
		i++;
	}
}
