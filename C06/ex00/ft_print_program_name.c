/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:18:01 by afindo            #+#    #+#             */
/*   Updated: 2021/10/12 12:22:28 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	while(argv[0][i] != '\0')
	{
		c = argv[0][i];
		write(1, &c ,1);
		i++;
	}
	write(1, "\n",1);
	return (0);
}
