/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:52 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/14 13:35:22 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
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
