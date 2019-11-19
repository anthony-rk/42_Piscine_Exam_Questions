/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:21:19 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 14:38:49 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// need a ft_putnbr to write number of params on the screen
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "0", 1);
	if (argc > 1)
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
