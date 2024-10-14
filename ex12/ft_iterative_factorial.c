/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:04 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:31:03 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void) {
    int number = 5;
    int result = ft_iterative_factorial(number);
    printf("Fatorial de %d é: %d\n", number, result);
    return 0;
}
*/
