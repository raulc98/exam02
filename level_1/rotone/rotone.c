/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 14:03:10 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 14:03:10 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if(argv[1][i] == 'z')
				{
					write(1,"a",1);
				}
				else if(argv[1][i] == 'Z')
				{
					write(1,"A",1);
				}
				else{
					char letter = argv[1][i] + 1;
					write(1, &letter,1);
				}
			}else
			{
				write(1,&argv[1][i],1);
			}
			i ++;	
		}
	}
	write(1,"\n",1);
	return (0);
}