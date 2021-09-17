/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mendoub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/* By: El hadjaoui <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:17:08 by mel-hadj          #+#    #+#             */
/*   Updated: 2021/09/17 15:17:08 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mendoub.h"

void calculate_Redavance_totale()
{

}

int main(int ac, char **ar)
{
    int PS_0;
    int PS_1;
    int step;
    if (ac == 4)
    {   
        PS_0 = ft_atoi(ar[1]);
        PS_1 = ft_atoi(ar[2]);
        step = ft_atoi(ar[3]);
        if (PS_0 < PS_MIN || PS_1 > PS_MAX || PS_0 > PS_1)
        {
             printf("Error\nPS Range ");
             return(-1);
        }
        while (PS_0 <= PS_1)
        {
            calculate_Redavance_totale();
            PS_0 += step;
        }
    printf("****************Done************\n");
        return (0);
    }
    printf("Arguments Error\n");
    printf("./mendoub [range of your PS (600 1350)] [step]");
}