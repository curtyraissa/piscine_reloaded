/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:57:02 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/15 13:51:21 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>
int is_non_empty_string(char *str)
{
    if (str != NULL)
    {
        if (str[0] != '\0')
        {
            return (1);
        }
    }
    return (0);
}

int main(void)
{
    char *tab[] = {"Hello", "World", "", "42", NULL};
    int count = ft_count_if(tab, &is_non_empty_string);
    printf("Number of elements returning 1: %d\n", count);
    return (0);
}
*/
