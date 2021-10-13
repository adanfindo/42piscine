/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:16:38 by afindo            #+#    #+#             */
/*   Updated: 2021/10/08 19:52:19 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*d;

	if (*to_find == '\0')
		return (str);
	s = str;
	d = to_find;
	while (*str != '\0' )
	{
		if (*d == '\0')
			return ((char *)(s - (d - to_find)));
		if (*s == *d)
			d++;
		else
			d = to_find;
		if (*s == '\0')
			break ;
		s++;
	}
	return (0);
}
