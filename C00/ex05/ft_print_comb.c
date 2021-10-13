/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:20:33 by afindo            #+#    #+#             */
/*   Updated: 2021/10/01 11:14:58 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, char c, bool ultimo)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (ultimo)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	bool	ultimo;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ultimo = !(a == '7' && b == '8' && c == '9');
				ft_write_comb(a, b, c, ultimo);
				c++;
			}
			b++;
		}
		a++;
	}
}
