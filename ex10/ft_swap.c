void    ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void) {
    int x = 10;
    int y = 20;

    ft_swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
*/