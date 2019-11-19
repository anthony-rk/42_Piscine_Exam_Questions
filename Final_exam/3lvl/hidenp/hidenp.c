/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:12:20 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 14:13:37 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		find_hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (!(s1[i] == s2[j]))
			j++;
		if (s1[i] == s2[j])
			i++;
			j++;
		if (s1[i] == '\0')
			return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 3)
	{
		i = find_hidenp(argv[1], argv[2]);
		if (i > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
