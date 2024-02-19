/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:01:22 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

void	all_step(t_data *information)
{
	if (information->total_numbers == 2)
		two_numbers(information);
	if (information->total_numbers == 3)
		three_number(information);
	if (information->total_numbers > 3)
	{
		push_to_b(information);
		three_number(information);
		push_to_a(information);
	}
}
