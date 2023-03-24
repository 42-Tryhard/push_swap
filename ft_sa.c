/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 08:52:08 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 11:40:01 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.
*/
void    swap_sa(int *a, int *b)
{
    int buff;

    buff = *a;
    *a = *b;
    *b = buff;
}

void    ft_sa(int *tab_a)
{
    swap_sa(&tab_a[0], &tab_a[1]);    
}