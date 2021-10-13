/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:55 by afindo            #+#    #+#             */
/*   Updated: 2021/10/08 08:03:10 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;
	int	ind;

	a = 0;
	ind = 0;
	while (str[ind] != '\0')
	{
		if (str[ind] >= 32 && str[ind] <= 126)
			a = 1;
		else
		{
			a = 0;
			break ;
		}
		ind++;
	}
	if (*str == '\0')
		a = 1;
	return (a);
}