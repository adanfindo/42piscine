/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:55 by afindo            #+#    #+#             */
/*   Updated: 2021/10/07 14:40:42 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
