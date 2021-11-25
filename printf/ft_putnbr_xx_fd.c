/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:53:25 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 23:11:59 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_xx_fd(unsigned int n, int fd, int *len)
{
	unsigned long	a;
	char			*base;

	base = "0123456789ABCDEF";
	if ((n >= 0) && (n < 16))
	{
		a = (n % 16);
		ft_putchar_fd(base[a], fd, len);
	}
	if (n >= 16)
	{
		ft_putnbr_xx_fd(n / 16, fd, len);
		ft_putchar_fd(base[n % 16], fd, len);
	}
}
