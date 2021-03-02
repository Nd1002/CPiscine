/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreyiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:02:44 by lgreyiro          #+#    #+#             */
/*   Updated: 2021/03/02 15:17:01 by lgreyiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int))
{
	int *newt;
	int i;

	i = 0;
	newt = (int*)malloc(sizeof(*newt) * length);
	while (i != length)
	{
		newt[i] = f(tab[i]);
		i++;
	}
    newt[i] = '\0';
	return (newt);
}
