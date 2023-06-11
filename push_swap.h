/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 08:51:57 by oliove            #+#    #+#             */
/*   Updated: 2023/06/11 18:58:23 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>



void	ft_sa(int *tab_a);
void	ft_sb(int *tab_b);
void	ft_ss(int *tab_a, int *tab_b);
void	ft_pa(int *tab_a, int *tab_b);
void	ft_pb(int *tab_a, int *tab_b);
void	ft_ra(int *stack, int size);
void	ft_rb(int *stack, int size);
void	ft_rr(int *stack_a, int *stack_b, int size);
void	ft_rra(int *stack, int size);
void	ft_rrb(int *stack, int size);
void	ft_rrr(int *tab_a, int *tab_b, int size);



#endif