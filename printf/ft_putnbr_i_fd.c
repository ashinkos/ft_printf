/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_i_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:04:21 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 16:02:10 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_i_fd(int n, int fd, int *len)
{
	long long	a;
	long long	b;

	a = (long long)n;
	if (n < 0)
	{
		a = a * -1;
		ft_putchar_fd('-', fd, len);
	}
	if ((a >= 0) && (a <= 9))
	{
		b = (a % 10);
		ft_putchar_fd(b + '0', fd, len);
	}
	if (a >= 10)
	{
		ft_putnbr_i_fd(a / 10, fd, len);
		ft_putchar_fd((a % 10) + '0', fd, len);
	}
}
