/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:08:38 by afindo            #+#    #+#             */
/*   Updated: 2021/10/04 16:18:55 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	char_num;

	char_num = 0;
	while (str[char_num] != '\0')
	{
		char_num++;
	}
	return (char_num);
}
