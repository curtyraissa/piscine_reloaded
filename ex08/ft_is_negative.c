/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:35:05 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:04:43 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*
#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
}
int main(void) {
    ft_is_negative(-42);
    ft_is_negative(0);
    ft_is_negative(42);
    return 0;
}
*/
