/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:58:20 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 15:13:20 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	int max = 0;
	int i = 0;

	while (len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
		len--;
	}
	return (max);
}

int		main(void)
{
	int	tab[] = {42, 0, 5, 64, 2, 68, 1};

	printf("max : %d", max(tab, 7));
	return (0);
}

