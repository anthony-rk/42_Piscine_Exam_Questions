/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:24:49 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 13:58:45 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // need for ft_putnbr
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putnbr(int nb) // need for writing to the screen
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb  / 10) > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	display_mult(int nb)
{
	int i;
	i = 1;

	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{

	if (argc != 2)
		write(1, "\n", 1);
	else
		display_mult(ft_atoi(argv[1]));
	return (0);
}
