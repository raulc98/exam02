/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 12:13:09 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 12:13:09 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

#include "stdio.h"

int main(void)
{
	int a = 1;
	int b = 2;

	printf("a: %d ", a);
	printf("b: %d ", b);
	printf("\n");
	ft_swap(&a, &b);
	printf("a: %d ", a);
	printf("b: %d ", b);
	return (0);
}