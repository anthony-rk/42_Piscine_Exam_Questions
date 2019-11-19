/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:18:23 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 14:20:28 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *array;
	int i;

	// find the size of the array, and malloc enough space, check for below zero
	if (start > end)
		array = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		array = (int *)malloc(sizeof(int) * (end - start + 1));

	if (end > start)
	{
		i = 0;
		while (end >= start)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		i = 0;
		while (end <= start)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}
