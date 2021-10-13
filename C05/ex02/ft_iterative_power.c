/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:59:23 by afindo            #+#    #+#             */
/*   Updated: 2021/10/13 10:10:04 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	tmp;

	tmp = nb;
	if (nb == 0 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= tmp;
		power--;
	}
	return (nb);
}
