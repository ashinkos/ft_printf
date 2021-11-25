/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:35:22 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 16:01:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u_fd(unsigned int n, int fd, int *len)
{
	unsigned int	b;

	if ((n >= 0) && (n <= 9))
	{
		b = (n % 10);
		ft_putchar_fd(b + '0', fd, len);
	}
	if (n >= 10)
	{
		ft_putnbr_u_fd(n / 10, fd, len);
		ft_putchar_fd((n % 10) + '0', fd, len);
	}
}
