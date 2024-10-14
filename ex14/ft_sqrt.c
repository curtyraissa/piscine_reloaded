/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:11:41 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 14:15:54 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void) {
    int number = 16;
    int result = ft_sqrt(number);
    printf("Raiz quadrada de %d é: %d\n", number, result);
    return 0;
}
*/
