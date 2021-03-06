/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreyiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:25:52 by lgreyiro          #+#    #+#             */
/*   Updated: 2021/03/02 16:13:46 by lgreyiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
    //if (*tab == NULL)
    //return (0);
	while (*tab != '\0')
	{
		if (f(*tab) != 0)
		{
			return (1);
		}
		tab++;
	}
	return (0);
}
