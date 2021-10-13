/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:56:52 by afindo            #+#    #+#             */
/*   Updated: 2021/10/13 12:30:35 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	index;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb == 1 || nb == 0)
		return (0);
	index = (nb - 1) / 2;
	while (index > 1)
	{
		if (nb % index == 0)
			return (0);
		index--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}
