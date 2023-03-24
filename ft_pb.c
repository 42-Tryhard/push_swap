/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:14:00 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 16:14:02 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_pb(int *a, int *b)
{
    int buff;

    buff = *b;
    *b = *a;
    *a = buff;
}

void    ft_pb(int *tab_a, int *tab_b)
{
    swap_pb(&tab_a[0], &tab_b[0]);
}