/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:28:43 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 11:42:28 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.

*/

void    swap_pa(int *a, int *b)
{
    int buff;

    buff = *a;
    *a = *b;
    *b = buff;
}

void    ft_pa(int *tab_a, int *tab_b)
{
    swap_pa(&tab_a[0], &tab_b[0]);

}
