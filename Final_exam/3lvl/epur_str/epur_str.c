/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:03:51 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 10:24:01 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		// skip the spaces & tabs at start of the string
		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while (*argv[1])
		{
			// Find a word, go until the end of the word
			while (*argv[1] >= 33 && *argv[1] <= 126)
			{
				ft_putchar(*argv[1]);
				argv[1]++;
			}
			// skip next spaces/tabs
			while (*argv[1] == ' ' || *argv[1] == '\t')
				argv[1]++;
			// put one space down if you get to a new word
			if (*argv[1] >= 33 && *argv[1] <= 126)
				ft_putchar(' ');
		}
	}
	write(1, "\n", 1);
	return (0);
}
