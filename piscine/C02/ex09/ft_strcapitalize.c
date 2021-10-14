/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:26:12 by afindo            #+#    #+#             */
/*   Updated: 2021/10/07 15:35:39 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	low_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	low_case(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i != 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z' ))
					str[i] -= 32;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
