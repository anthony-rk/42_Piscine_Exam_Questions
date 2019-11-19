/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:04:20 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 12:05:35 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotate(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y' ))
		return (c += 1);
	else if ((c == 'z') || (c == 'Z'))
		return (c -= 25);
	else
		return (c);
}


int		main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			ft_putchar(rotate(argv[1][i]));
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
