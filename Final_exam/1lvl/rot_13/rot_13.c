/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:54:17 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 12:02:37 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotate(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M' ))
		return (c += 13);
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c -= 13);
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
