/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 12:09:32 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 12:09:32 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}

	return (i);
}


#include <stdio.h>

int main(void)
{
	printf("%d", ft_strlen("asdasdaHOla mundo"));
	return (0);
}