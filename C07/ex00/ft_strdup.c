/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:55:43 by afindo            #+#    #+#             */
/*   Updated: 2021/10/14 11:21:36 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		len;

	len = 0;
	i = -1;
	while (src[++i] != '\0')
		len++;
	c = (char *)malloc(sizeof(char) * len + 1);
	i = -1;
	while (src[++i] != '\0')
		c[i] = src[i];
	c[i] = '\0';
	return (c);
}
