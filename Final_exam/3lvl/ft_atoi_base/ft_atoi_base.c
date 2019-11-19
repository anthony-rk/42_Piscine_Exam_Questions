/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:14:10 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 16:02:50 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // for main testing
#include <stdlib.h> // for main testing

int		nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || (c >= 'a' && c <= ('a' + base - 10)));
}


int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int nbr;
	int sign;

	if (!str[0] || (str_base < 2 || str_base > 16)) // makes sure there is a string and the base is valid
			return (0);
	
	nbr = 0;
	sign = 1;
	
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && nbr_inbase(str[i], str_base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * str_base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = (nbr * str_base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * str_base) + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi_base("011", atoi("2")));
	printf("%d\n", ft_atoi_base("16", atoi("8")));
	printf("%d\n", ft_atoi_base("123", atoi("10")));
	printf("%d\n", ft_atoi_base("FF", atoi("16")));
}
