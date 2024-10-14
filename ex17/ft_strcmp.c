/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:19:21 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:38:59 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
    printf("%d\n", ft_strcmp(str1, str2)); //0
    printf("%d\n", ft_strcmp(str1, str3)); //negativo
    printf("%d\n", ft_strcmp(str3, str1)); //positivo
    return 0;
}
*/
