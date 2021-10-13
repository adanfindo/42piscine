/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:16:41 by afindo            #+#    #+#             */
/*   Updated: 2021/10/04 14:10:27 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	ind;
	int	tmp;

	ind = 0;
	while (ind < size / 2)
	{
		tmp = tab[ind];
		tab[ind] = tab[size - 1 - ind];
		tab[size - 1 - ind] = tmp;
		ind++;
0	}
}
