/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 12:20:37 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 12:20:37 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int dictionary_position(char letter)
{
	// printf("c: %c \n", letter);
	if(letter == 'a')
		return (1);
	else if(letter == 'b')
		return (2);
	else if(letter == 'c')
		return (3);
	else if(letter == 'd')
		return (4);
	else if(letter == 'e')
		return (5);
	else if(letter == 'f')
		return (6);
	else if(letter == 'g')
		return (7);	
	else if(letter == 'h')
		return (8);
	else if(letter == 'i')
		return (9);
	else if(letter == 'j')
		return (10);				
	else if(letter == 'k')
		return (11);
	else if(letter == 'l')
		return (12);
	else if(letter == 'm')
		return (13);
	else if(letter == 'n')
		return (14);
	else if(letter == 'o')
		return (15);
	else if(letter == 'p')
		return (16);
	else if(letter == 'q')
		return (17);
	else if(letter == 'r')
		return (18);
	else if(letter == 's')
		return (19);
	else if(letter == 't')
		return (20);
	else if(letter == 'u')
		return (21);
	else if(letter == 'v')
		return (22);
	else if(letter == 'w')
		return (23);
	else if(letter == 'x')
		return (24);
	else if(letter == 'y')
		return (25);
	else if(letter == 'z')
		return (26);
	else
		return (1);
}


int main(int argc, char **argv)
{
	int i = 0; 
	if(argc == 2)
	{
		while (argv[1][i])
		{
			int j = dictionary_position(argv[1][i]);
			// printf("j: %d \n",j);
			while (j > 0)
			{
				write(1, &argv[1][i],1);
				j --;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}