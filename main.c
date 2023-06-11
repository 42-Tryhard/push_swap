/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 08:12:27 by oliove            #+#    #+#             */
/*   Updated: 2023/06/11 19:55:01 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "push_swap.h"
#include "structures.h"

int main(int argc, char *argv[]) {

    t_stack *stack_A = malloc(sizeof(stack_A));
    

    if (argc < 2) {
        printf("Veuillez fournir au moins un nombre à trier en argument.\n");
        return 1;
    }

  
    int taille = argc - 1;
    
    int i = 1;
    while (i < argc)
    {
        stack_A->value[i-1] = atoi(argv[i]);
        i++;
    }
    

    for (int i = 1; i < argc; i++) {
        stack_A->value[i-1] = atoi(argv[i]);
    }

 
    printf("Suite triée : \n");
    for (int i = 0; i < taille; i++) {
        printf("%d \n", stack_A->pos[i]);
    }
    printf("\n");
    free(stack_A);

    return 0;
}
