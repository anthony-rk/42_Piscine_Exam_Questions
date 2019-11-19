/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:53:48 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/07 15:04:40 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
		i++;
	return (i);

}

char	*ft_strdup(char *src)
{
	char 	*out;
	int 	len;
	int 	i;

	len = ft_strlen(src);

	out = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		out[i] = src[i];
		i++;
	}
	return (out);

}

int		main(void)
{
	char string[] = "Hello";

	printf("%s\n", ft_strdup(string));

	return (0);
}
