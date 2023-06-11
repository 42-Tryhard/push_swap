/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 08:55:43 by oliove            #+#    #+#             */
/*   Updated: 2023/06/11 18:57:08 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "structures.h"

/* Comment je vois l'algo

    tout d'abore on check le nbr d'elts a trier.
    une fois le nbr d'elts connue on le stock pour savoir quel algo faire 
   
    -par exemple pour 3 elts on va regarder l'index de chaque int reçue :
        |------------------------|----------| 
        |entier reçut| position[]|   index  |                    | 
        |------------|-----------|----------| 
        |     1      |     0     |     1    |
        |------------|-----------|----------| 
        |     3      |     1     |     3    |
        |------------|-----------|----------| 
        |     2      |     2     |     2    |
        |------------|----------------------- 
    l'index donne la position final du int. donc l'index sert à connaitre la pos et me permet
    de savoir si x ou x est trier ou pas. Dans ce cas, il saudrait que l'elt[0] soit en pos[2]

            Case		actions
            1 2 3		=> no action
            1 3 2		-> rra -> 2 1 3 -> sa  -> 1 2 3 => 2 actions
            2 1 3		-> sa  -> 1 2 3 => 1 action
            2 3 1		-> rra -> 1 2 3 => 1 action
            3 1 2		-> ra  -> 1 2 3 => 1 action
            3 2 1		-> ra  -> 2 1 3 -> sa  -> 1 2 3 => 2 actions
    Pour trier 3 nombre je n'ai pas besoin de la stack_B et les move que j'aurai besoin sont :
            ra, rra et sa,
        Si l'indice du premier nombre est le plus élevé , faire ra

        Sinon, si l'indice du deuxième nombre est le plus élevé , faire rra

        Ensuite, si l'indice du premier nombre est plus grand que l'indice du deuxième 
        nombre , fair sa
       
    DONC IL ME FAUT :
        - une fonction qui reçoit les elts en (argc/argv)
            *elle devras calculer le nbr d'elts
            *initialiser stack_a & stack_b
            *envoyer les elts dans la stack_a pour etre traiter par l'algo qui faudra
        -une fonction de prediction de coup (calcul le nombre de coup il faut pour deplacer un elts a sa bonne position)
            *elle devra gerer les possibilité de move (sa,sb,pa,pb,etc...)
            *elle devra garder en memoir le meilleur coup au fur a mesur des check, et s'adapter si elle trouve mieux
    
    Il y a plusieur chose que j'aurais besoin:
        -Les structure et les liste chainnées 
            *pour gerer les stack_a & stack_b
            *stocké les (data, coup prediction, )
*/


void push_swap(t_stack *stackA,size_t size)
{

    if (size == 3)
        trie_stack_three(stackA,size);
        
    // initialise toute les valeur de position et d'index de structure
    // Prediction de coup
    // tester tout les coups et leurs donner une note sur "X" (NDC && position)
    // enclancher la secance de mouvement 

  

}

/*
void free_stack(int *tableau_a, int *tableau_b)
{
    if (*tableau_a != NULL)
        free(*tableau_a);
    if (*tableau_a != NULL)
      free(*tableau_b);
    
}
*/