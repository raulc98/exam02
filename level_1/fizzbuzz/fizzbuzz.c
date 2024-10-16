/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 11:08:50 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 11:08:50 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_number(int i)
{
	char str[10]= "0123456789";

	if(i > 9)
	{
		print_number(i / 10);
	}
	write(1,&str[i % 10],1);
}

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if(i % 3 == 0 && i % 5 != 0)
		{
			write(1,"fizz",4);
		}else if(i % 5 == 0 && i % 3 != 0)
		{
			write(1,"buzz",4);
		}else{
			print_number(i);
		}
		i++;
		write(1,"\n",1);
	}
	return(0);
}
