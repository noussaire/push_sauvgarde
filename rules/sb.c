/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:52 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:54 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_sb(t_data *information)
{
	int	tmp;

	write(1, "sb\n", 3);
	tmp = information->stack_b[0];
	information->stack_b[0] = information->stack_b[1];
	information->stack_b[1] = tmp;
}

void	s_b(t_data *information, int tour)
{
	int	i;

	i = 0;
	while (i < tour)
	{
		set_sb(information);
		i++;
	}
}
