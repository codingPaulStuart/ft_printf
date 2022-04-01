/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:41:40 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/30 12:05:08 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printhex(unsigned int value, const char c, int *counter)
{
	if (value == 0)
		(*counter) += (write(1, "0", 1));
	else
	{
		ft_puthex(value, c);
		(*counter) += ft_hexlen(value);
	}
}
