/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:23:05 by oliove            #+#    #+#             */
/*   Updated: 2023/06/11 18:58:37 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <stdlib.h>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                               Verifier norme pour les structures !!!!                                                          */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct s_stack
{
    int value; //valeur de l'entier à trier 
    int index; //son index de toute les valeur à trier 
    int pos; // sa position actuel deans la liste 
    int target_pos; // pour les ellement de la pile B la position cible de la pile A ou elle devrait etre
    int cost_a; // combient d'acction il en coutera pour fair pivoter A, afin que l'elts a la position cible ataigne le somet A
    int cost_b;// : combien d'actions il en coûterait pour faire pivoter la pile B afin que cet élément arrive en haut de la pile B,
    struct s_stack *next;// pointeur vers le prochain elts de la listes
}               t_stack;


void    trie_stack_three(t_stack *stack_a,int size );



#endif