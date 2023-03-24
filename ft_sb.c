/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:26:52 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 11:39:46 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.
*/
#include "push_swap.h"

void    swap_sb(int *a, int *b)
{
    int buff;

    buff = *a;
    *a = *b;
    *b = buff;
}

void    ft_sb(int *tab_b)
{
    swap_sb(&tab_b[0], &tab_b[1]);    
}