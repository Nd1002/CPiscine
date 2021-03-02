/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:38:44 by afalyse           #+#    #+#             */
/*   Updated: 2021/02/23 22:27:21 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
    int i;
    int count;
    int tr;
    int power;
    
    power = 1;
    tr = 0;
    i = 0;
    count = 0;
    while( str[i] < 33 || str[i] == 43 || str[i] == 45
          ||(str[i] >= 48 && str[i] <= 57))
    {
        if (str[i] == '-')
            count++;
        if(str[i] >= 48 && str[i] <= 57)
        {
            tr = tr * power + (str[i] - '0');
            power = 10;
            if (str[i + 1] < 33 || str[i + 1] == 43 || str[i + 1] == 45)
                break ;
            }
            i++;
        }
        if (count % 2 != 0)
            tr = tr *(-1);
    return (tr);
}
