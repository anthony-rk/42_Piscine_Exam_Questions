/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:14:43 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 11:23:17 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter(char c)
{
	int repeat = 1;

	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
		return (repeat);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
		return (repeat);
	}
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (j < letter(argv[1][i]))
			{
				write(1, &argv[1][i], 1);		
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);


	return (0);
}
