/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:12:02 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 12:15:06 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rb(int *stack, int size)
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