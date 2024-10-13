/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 14:25:12 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 14:25:12 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int check_args(char * argv)
{
	int i = 0;
	while (argv[i])
	{
		i ++;
		if(i > 1)
			return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 4)
	{
		if(check_args(argv[2]) == 0 && check_args(argv[3]) == 0)
		{
			while (argv[1][i])
			{
				if(argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				write(1,&argv[1][i],1);
				i ++;
			}
		}
	}
	write(1, "\n", 1);
	
	return (0);
}