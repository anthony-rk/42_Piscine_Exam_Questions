/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:56:57 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 12:22:50 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		hcd(int n1, int n2)
{
	int highest = 1;
	int i = 2;

	// find ALL denominators of the smaller int
	// check which of those divide into the larger, save the largest and return

	if (n1 < n2)
	{
		while (i <= n1)
		{
			if (n1 % i == 0 && n2 % i == 0)
				highest = i;
			i++;
		}
	}
	else
	{
		while (i <= n2)
		{
			if (n1 % i == 0 && n2 % i == 0)
				highest = i;
			i++;
		}
	}
	return (highest);
}

int		main(int argc, char *argv[])
{
	int n1;
	int n2;

	if (argc == 3)
	{	
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 < 1 || n2 < 1)
		{
			printf("\n");
			return (0);
		}
		printf("%d", hcd(n1, n2));		
	}
	printf("\n");
	return (0);

}
