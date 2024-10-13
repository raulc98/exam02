/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-13 11:44:00 by rcabrero          #+#    #+#             */
/*   Updated: 2024-10-13 11:44:00 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

#include <stdio.h>
#include <stdlib.h>  // Para malloc

int main(void)
{
    char *str1 = "HOLA MUNDO";

    // Asignamos memoria para str2 (longitud de str1 + 1 para el '\0')
    char *str2 = (char *)malloc((sizeof(char) * 11) + 1);  // str1 tiene 11 caracteres

    // Si malloc falla, no continuamos
    if (!str2)
        return (1);

    // Copiamos la cadena de str1 a str2
    printf("%s\n", ft_strcpy(str1, str2));

    // Liberamos la memoria de str2
    free(str2);

    return (0);
}