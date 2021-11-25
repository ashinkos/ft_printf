/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:44:31 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 23:11:24 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x_fd(unsigned int n, int fd,	int *len)
{
	unsigned int	a;
	char			*base;

	base = "0123456789abcdef";
	if ((n >= 0) && (n < 16))
	{
		a = (n % 16);
		ft_putchar_fd(base[a], fd, len);
	}
	if (n >= 16)
	{
		ft_putnbr_x_fd(n / 16, fd, len);
		ft_putchar_fd(base[n % 16], fd, len);
	}
}
