/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/12 13:08:56 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../heiders/push_swap.h"

void	run(t_data *information)
{
	ss(information, information->ss);
	rr(information, information->rr);
	rrr(information, information->rrr);
	s_a(information, information->sa);
	r_a(information, information->ra);
	rr_a(information, information->rra);
	s_b(information, information->sb);
	r_b(information, information->rb);
	rr_b(information, information->rrb);
}