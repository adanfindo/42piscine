/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:57:49 by afindo            #+#    #+#             */
/*   Updated: 2021/10/04 14:29:00 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	risultato;
	int	resto;

	risultato = *a / *b;
	resto = *a % *b;
	*a = risultato;
	*b = resto;
}
