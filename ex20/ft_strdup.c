#include <stdlib.h>

char *ft_strdup(char *src) {
    int len = 0;
    char *dup;
    int i;


    while (src[len]) {
        len++;
    }
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup) {
        return NULL;
    }
    i = 0;
    while (i < len) 
    {
        dup[i] = src[i];
        i++;
    }
    dup[len] = '\0';
    return (dup);
}

/*
#include <stdio.h>
int main() {
    char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy); // Libera a memória alocada
    } else {
        printf("Memory allocation failed\n");
    }

    return (0);
}
*/