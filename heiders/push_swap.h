/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:00:57 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 14:25:02 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <errno.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct data
{
	int	*stack_a;
	int	*stack_b;
	int	*list_sorted;
	int	total_numbers;
	int	*tab_instruc;
	int	count_stack_a;
	int	count_stack_b;
	int	count;

	int	sa;
	int	sb;
	int	ss;

	int	ra;
	int	rb;
	int	rr;

	int	rra;
	int	rrb;
	int	rrr;

	int	pa;
	int	pb;

}		t_data;

int		check_if__all_is_space(char *str);
int		check_format(int argc, char **argv);
int		check_format_two(int argc, char **argv);
char	**handle_arguments_format(char **argv);
char	**join_argv(int argc, char **argv);
int		ft_strlen_tab(char **argv);
void	plus_petite_number(int *counter, int *duplcate_stack_a, int *sort,
			int i);
int		lent(int ac, char **argv);
int		count_num(char *s, char espace);
int		process_data(int format, int numbers, char **new_argv,
			t_data *information);
int		if_there_is_no_number_tow(int argc, char **argv);
int		cheacke_int(char *str);
// error
int		check_error(int argc, char **argv, int format);
int		if_there_is_no_number(int argc, char **argv);
int		if_number_is_max_or_min(int argc, char **argv);
int		sorted(t_data *info);
int		*copy_stack(int *stack, int numbers);
int		check_if_there_is_double_one(int argc, char **argv);
// free
void	ft_free_argv(char **argv, int which_format);
void	ft_free_memory(t_data *information);
// rules
void	initial_rules(t_data *info);
// stack A
void	remplire_stack_a(t_data *information, char **argv, int format);
void	ways_to_a(t_data *information, int position);
void	ways_to_b(t_data *information, int pos);
// sort
int		*sort_list(t_data *information);
void	two_numbers(t_data *information);
void	three_number(t_data *information);

// steps
void	all_step(t_data *information);

// rules pour sorter
void	s_a(t_data *information, int one_more);
void	s_b(t_data *information, int one_more);
void	r_a(t_data *information, int one_more);
void	r_b(t_data *information, int one_more);
void	rr_a(t_data *information, int one_more);
void	rr_b(t_data *information, int one_more);
void	p_b(t_data *information, int one_more);
void	p_a(t_data *information, int one_more);
void	ss(t_data *information, int one_more);
void	rr(t_data *information, int one_more);
void	rrr(t_data *information, int one_more);
// pussh
void	push_to_b(t_data *information);
void	push_to_a(t_data *information);
// run
void	run(t_data *information);
////////
int		get_position_from_stack_b(t_data *information, int num);
void	organization_the_rules(t_data *information);
int		get_small_number(t_data *information);
#endif