/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:40:37 by afindo            #+#    #+#             */
/*   Updated: 2021/10/13 11:32:39 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	fact;

	if (nb < 0)
		return (0);
	index = 1;
	fact = 1;
	while (index < nb + 1)
	{
		fact = fact * index;
		index++;
	}
	return (fact);
}
