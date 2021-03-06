/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:04:55 by afindo            #+#    #+#             */
/*   Updated: 2021/10/08 10:38:32 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	char	*tmp;

	tmp = dest;
	while (*tmp != '\0')
	{		
		tmp++;
	}
	while (*src != '\0' && n > 0)
	{
		*tmp = *src;
		tmp ++;
		src++;
		n--;
	}
	*tmp = '\0';
	return (dest);
}
