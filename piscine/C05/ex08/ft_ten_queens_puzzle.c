/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftedde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:13:02 by ftedde            #+#    #+#             */
/*   Updated: 2021/10/13 15:50:38 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_problem_solver(char *tab, int x, int *max)
{
	int	i;
	int	j;

	if (x == 10)
	{
		x = 0;
		while (x < 10)
			ft_putchar(tab[x++] + '0');
		ft_putchar('\n');
		(*max)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		j = 0;
		while (j < x && i != tab[j] && ft_abs(tab[j] - i) != x - j)
			j++;
		if (j >= x)
		{
			tab[x] = i;
			ft_problem_solver(tab, x + 1, max);
		}
	}
}

int	ft_queens(void)
{
	char	tab[10];
	int		max;

	max = 0;
	ft_problem_solver(tab, 0, &max);
	return (max);
}
