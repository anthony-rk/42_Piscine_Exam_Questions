/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:18:16 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 15:00:00 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // for testing

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int res;
	int hcf;
	int i;

	res = 0;
	if (a > 0 && b > 0)
	{
		hcf = 1;
		// finding the Highest Common Factor
		i = 1;
		while (i <= a && i <= b)
		{
			if (a % i == 0 && b % i == 0)
				hcf = i;
			i++;
		}
		// LCM(x, y) = | x * y | / HCF(x, y)
		res = (a * b) / hcf;
	}
	return (res);
}

int		main(void)
{
	printf("%d\n", lcm(8, 24));
	return (0);
}
