

#include <unistd.h>

void	print_first_word(char *str)
{
	int i = 0;

	// Ignora los espacios y tabulaciones al principio de la cadena
    while (str[i] == ' ' || str[i] == '\t')
        i++;

	while(str[i] == ' ' || str[i] == '\t' || str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int main(int args,char **argv)
{
	if(args == 2)
	{
		print_first_word(argv[1]);
	}
	
	write(1,"\n",1);
	return (0);
}