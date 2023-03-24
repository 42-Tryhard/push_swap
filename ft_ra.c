/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:58:13 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 16:14:19 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(int *stack, int size)
{
    int buff;
    int i;

    i = 0;
    buff = stack[0];
    while (i < size -1)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[i] = buff;
    
}