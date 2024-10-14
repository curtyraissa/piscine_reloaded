/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:42 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:32:21 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main(void) {
    int number = 5;
    int result = ft_recursive_factorial(number);
    printf("Fatorial de %d é: %d\n", number, result);
    return 0;
}
*/
