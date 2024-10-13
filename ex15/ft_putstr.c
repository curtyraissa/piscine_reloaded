void ft_putchar(char c);

void ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}

/*
include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putstr("teste");
    return (0);
}
*/