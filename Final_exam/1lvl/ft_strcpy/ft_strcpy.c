/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:39:44 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/11 10:42:40 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (*s2)
	{
		s1[i] = s2[i];
		i++
	}
	s1[i] = '\0';
	return (s1);
}
