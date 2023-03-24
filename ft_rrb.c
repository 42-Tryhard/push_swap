/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:36:36 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 16:07:56 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rrb(int *stack, int size)
{
    int buff;
    int i;

    if (size <= 1)
        return;
    i = size -1;
    buff = stack[size -1];
    while(i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = buff;
}