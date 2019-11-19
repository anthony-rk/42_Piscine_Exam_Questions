/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:40:04 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/12 14:41:13 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'A' && str[i] < 'Z')
			str[i] += 'a' - 'A';
		if ((str[i] > 'a' && str[i] < 'z') && (str[i - 1] == ' ' || str[i - 1] == '\0' || str[i - 1] == '\t'))
			str[i] -= 'a' - 'A';
		write(1, &str[i],1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
