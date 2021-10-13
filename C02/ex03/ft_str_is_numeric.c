/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:55 by afindo            #+#    #+#             */
/*   Updated: 2021/10/07 10:19:45 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int		index;
	bool	valid;
	char	current;

	index = 0;
	valid = true;
	while (true)
	{
		current = str[index];
		if (current == '\0')
		{
			break ;
		}
		if (!(current >= '0' && current <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
