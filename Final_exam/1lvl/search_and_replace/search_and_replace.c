/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:07:03 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 12:18:36 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);

}

char	*search_and_replace(char *s1, char old, char new)
{
	int i = 0;
	while (s1[i])
	{
		if (s1[i] == old)
			s1[i] = new;
		ft_putchar(s1[i]);
		i++;
	}
	return (s1);
}

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);

	return (0);
}
