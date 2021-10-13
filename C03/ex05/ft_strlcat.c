/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 09:01:17 by afindo            #+#    #+#             */
/*   Updated: 2021/10/08 10:39:43 by afindo           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ind;
	unsigned int	j_ind;
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = ft_strlen(dest);
	count_src = ft_strlen(src);
	ind = 0;
	j_ind = count_dest;
	if (size > count_dest)
	{
		while (j_ind < (size - 1) && src[ind] == '\0')
		{
			dest[j_ind] = src[ind];
			j_ind++;
			ind++;
		}
	}
	else
		return (size + count_src);
	dest[j_ind] = '\0';
	return (count_dest + count_src);
}
