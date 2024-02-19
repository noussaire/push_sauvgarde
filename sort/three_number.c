/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:05:37 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

void	three_number(t_data *information)
{
	if (information->stack_a[0] > information->stack_a[1]
		&& information->stack_a[0] > information->stack_a[2])
		r_a(information, 1);
	if (information->stack_a[0] > information->stack_a[1])
		s_a(information, 1);
	if (information->stack_a[1] > information->stack_a[2])
		rr_a(information, 1);
	if (information->stack_a[0] > information->stack_a[1])
		s_a(information, 1);
}
