/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:22:47 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 23:22:52 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadresse_fd(unsigned long long n, int fd, int *len)
{
	unsigned long long	a;
	char			*base;

	base = "0123456789abcdef";
	
	if ((n >= 0) && (n < 16))
	{
		a = (n % 16);
		ft_putchar_fd(base[a], fd, len);
	}
	if (n >= 16)
	{
		ft_putadresse_fd(n / 16, fd, len);
		ft_putchar_fd(base[n % 16], fd, len);
	}
}
 