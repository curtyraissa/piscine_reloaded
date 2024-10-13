int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

/*
#include <stdio.h>
int main(void) {
    char *str1 = "Hello";
    char *str2 = "Hello";
    char *str3 = "World";

    printf("Comparando '%s' e '%s': %d\n", str1, str2, ft_strcmp(str1, str2)); // Deve imprimir 0
    printf("Comparando '%s' e '%s': %d\n", str1, str3, ft_strcmp(str1, str3)); // Deve imprimir um valor negativo
    printf("Comparando '%s' e '%s': %d\n", str3, str1, ft_strcmp(str3, str1)); // Deve imprimir um valor positivo

    return 0;
}
*/