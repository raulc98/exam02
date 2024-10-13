/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 11:38:50 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 11:38:50 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i ++;
	}
}

//TODO: EL MAIN TIENE QUE ESTAR COMENTADO...
int main(void)
{
	ft_putstr("HOLA MUNDO");
	return (0);
}