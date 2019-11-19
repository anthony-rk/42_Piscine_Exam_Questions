/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:12:11 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 12:49:12 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar((nb % 16) + '0');
	else
		ft_putchar((nb % 16) - 10 + 'a');
}

int		ft_atoi(const char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int		main(int ac, char *av[])
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));

	}
	write(1, "\n", 1);
	return (0);

}
