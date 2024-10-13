int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

/*
#include <stdio.h>
int main(void) {
    printf("O comprimento da string 'TESTE' é: %d\n", ft_strlen("TESTE")); 
    return 0;
}
*/