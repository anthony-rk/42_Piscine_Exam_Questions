/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akowalsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:42:34 by akowalsk          #+#    #+#             */
/*   Updated: 2019/11/08 16:18:01 by akowalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
				(((octet >> 1) & 1) << 6) | \
				(((octet >> 2) & 1) << 5) | \
				(((octet >> 3) & 1) << 4) | \
				(((octet >> 4) & 1) << 3) | \
				(((octet >> 5) & 1) << 2) | \
				(((octet >> 6) & 1) << 1) | \
				(((octet >> 7) & 1) << 0);
}

int		main(void)
{
	printf("%d", reverse_bits(4));
		return (0);
}
