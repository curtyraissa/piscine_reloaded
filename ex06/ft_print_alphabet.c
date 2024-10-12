void    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char i;

    i = 97;
    while(i <= 122)
    {
        ft_putchar(i);
        i++;
    }
}

/*
#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
}
int main(void) {
    ft_print_alphabet();
    return 0;
}
*/