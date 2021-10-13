/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:29:48 by afindo            #+#    #+#             */
/*   Updated: 2021/10/07 14:52:03 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	print(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	this_char;

	i = 0;
	while (true)
	{
		this_char = str[i];
		if (this_char == '\0')
			break ;
		if (print(this_char))
			ft_putchar(this_char);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[this_char / 16]);
			ft_putchar("0123456789abcdef"[this_char % 16]);
		}
		i++;
	}
}
