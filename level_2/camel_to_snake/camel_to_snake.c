/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabrero <rcabrero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:27:50 by rcabrero          #+#    #+#             */
/*   Updated: 2024/10/14 20:27:50 by rcabrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//malloc,realloc, free y write

void convert_camel_case(char *argv)
{
    int i = 0;
    char temp_letter;
    while(argv[i])
    {
        if(argv[i] >= 'A' && argv <= 'Z')
        {
            write(1, "_", 1);
            tempLetter = agrv[i] - 32;
            write(1, &temp_letter, 1);
        }else{
            write(1, &argv[i], 1);
        }
        i ++;
    }
}

int main(int agrc, char **argv)
{
    if(argc == 2)
    {
        convert_camel_case(argv[1])
    }
    write(1, "\n", 1);
    return (0);
}