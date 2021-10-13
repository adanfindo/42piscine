/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:02:45 by afindo            #+#    #+#             */
/*   Updated: 2021/10/12 22:06:02 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	string;

	string = str;
	while (string != 0)
	{
		write(1, string, 1);
		string++;
	}
	write(1, "\n", 1);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s1[n] == s2[n])
		n++;
	return (s1[n] - s2[n]);
}

void	ft_sort_tab(char *tab[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	ft_sort_tab(argv, argc);
	while (n <= argc - 1)
		ft_putstr(argv[n++]);
	return (0);
}
