/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:33:11 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/07 14:40:15 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] -= ('a' - 'A');
				ft_putchar(argv[1][i]);
				i++;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += ('a' - 'A');
				ft_putchar(argv[1][i]);
				i++;
			}
			else 
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}

