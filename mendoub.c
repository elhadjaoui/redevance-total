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

int  calculate_Redavance_totale(int ps_0)
{
    int RPS;
    int RDPS;
    int temp;
    char month[12][10] ={"640", "780", "882", "894", "1351", "1198", "1199", "1120", "1220", "998", "888", "707"};

    RPS = ps_0 * PF;
    RDPS = 0;
    for (int i = 0; i < 12; i++)
    {
        temp = (ft_atoi(month[i]) - ps_0) * PF * 1.5;
        if (temp > 0)
            RDPS += temp;
    }
    return ((RPS * 12) + RDPS);
}

int main(int ac, char **ar)
{
    int PS_0;
    int PS_1;
    int step;
    int redevance_total;
    if (ac == 4)
    {
        PS_0 = ft_atoi(ar[1]);
        PS_1 = ft_atoi(ar[2]);
        step = ft_atoi(ar[3]);
        if (PS_0 < PS_MIN || PS_1 > PS_MAX || PS_0 > PS_1)
        {
            printf("Error\nPS Range \n");
            return (-1);
        }
        if (step <= 0)
        {
             printf("Error\nstep must be greater than 0\n");
            return (-1);
        }
        while (PS_0 <= PS_1)
        {
           redevance_total =  calculate_Redavance_totale(PS_0);
            printf("pour PS = %d la redevance total = %d\n", PS_0, redevance_total);

            PS_0 += step;
        }
        printf("****************Done************\n");
        return (0);
    }
    printf("Arguments Error\n");
    printf("./mendoub [range of your PS (600 1350)] [step]\n");
}