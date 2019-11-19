/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:45:41 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/08 15:25:30 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n  == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return(0);
		n = n / 2;
	}
	return (1);
}

int		main(void)
{
	int i = 16;

	printf("%d\n", is_power_of_2(i));
	printf("%d\n", is_power_of_2(1));
	return (0);
}
