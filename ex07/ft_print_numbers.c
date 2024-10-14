/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:29:09 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 12:34:37 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i <= 57)
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
    ft_print_numbers();
    return 0;
}
*/
