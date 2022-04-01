/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:26:42 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/30 13:37:59 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printp(unsigned long long value, int *counter)
{
	(*counter) += write(1, "0x", 2);
	if (value == 0)
		(*counter) += (write(1, "0", 1));
	else
	{
		ft_putptr(value);
		(*counter) += ft_ptrlen(value);
	}
}
