/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreyiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:42:54 by lgreyiro          #+#    #+#             */
/*   Updated: 2021/03/01 21:34:49 by lgreyiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

void ft_strp(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		write(1,string,1);
		string++;
		i++;
	}
	string[i] = '\0';
}

int ft_display_file(char *filename)
{
	int fd;
	char buf[1];
	

	fd = open(filename,O_RDONLY);

	while(read(fd,buf,sizeof(buf)))
	{
		write(1, buf, sizeof(buf));
	}
	close(fd);
	
	return 0;	
}


int main(int argc, char **argv)
{
	
	if (argc >= MTN)
		ft_strp("Too many arguments.");
	if (argc < ENG)
		ft_strp("File name missing.");
	if (argc == ENG)
		return(ft_display_file(argv[1]));

	

return (0);
}

