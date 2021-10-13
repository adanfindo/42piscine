/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:20:38 by afindo            #+#    #+#             */
/*   Updated: 2021/10/03 12:27:17 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	char_mander(int row, int col, int total_row, int total_col)
{
	if ((row == 0 || row == total_row) && (col == 0 || col == total_col))
		ft_putchar('o');
	else if ((row == 0 || row == total_row) && (col != 0 || col != total_col))
		ft_putchar('-');
	else if ((row != 0 || row != total_row) && (col == 0 || col == total_col))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			char_mander(row, col, y - 1, x - 1);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
