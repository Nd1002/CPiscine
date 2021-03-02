/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreyiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:42:57 by lgreyiro          #+#    #+#             */
/*   Updated: 2021/03/02 17:56:26 by lgreyiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;
	int diff_1;
	int diff_2;
	int count;
	
	i = 0;
	j = 1;
	count = 0;
	while (j + 1 < length)
	{
		diff_1 = (*f)(tab[i], tab[j]);
		diff_2 = (*f)(tab[j], tab[j + 1]);
		if ((diff_1 >= 0 && diff_2 >= 0) || (diff_1 <= 0 && diff_2 <= 0))
		{
            count++;
        }
        else
        {
            return (0);
        }
		i++;
		j++;
	}
	return (1);
}
