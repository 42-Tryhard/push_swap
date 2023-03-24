/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliove <olivierliove@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 08:12:27 by oliove            #+#    #+#             */
/*   Updated: 2023/03/24 16:12:01 by oliove           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"


int main(int ac, char **av)
{

    int i;

    
    int tableau[] = {3,1,5,6,7,2,9,4,8,0};
    int tab[] = {12,16,18,20,21,22,23,24,28,26};
	int lenght = sizeof(tableau) / sizeof(int);
  
    i = 0;
    while (i < lenght)
    {
        printf("%d                %d\n",tableau[i],tab[i]);
        i++;
    }
    
    ft_rrr(tableau,tab,10);
    printf("=====================================\n");
    i = 0;
    while (i < lenght)
    {
        printf("%d                %d\n",tableau[i], tab[i]);
        i++;
    }
    

    return (0);
}

