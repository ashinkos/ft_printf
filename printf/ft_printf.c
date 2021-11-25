/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:19:37 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 23:23:38 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_type(char *str, va_list args, int i, int *len)
{
	if (str[i] == 'c')
		ft_putchar_fd(va_arg(args, int), 1, len);
	if (str[i] == 's')
		ft_putstr_fd(va_arg(args, char *), 1, len);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr_i_fd(va_arg(args, int), 1, len);
	if (str[i] == 'u')
		ft_putnbr_u_fd(va_arg(args, unsigned int), 1, len);
	if (str[i] == 'p')
	{
		ft_putstr_fd("0x", 1, len);
		ft_putadresse_fd((va_arg(args, unsigned long long)), 1, len);
	}
	if (str[i] == 'x')
		ft_putnbr_x_fd(va_arg(args, unsigned long), 1, len);
	if (str[i] == 'X')
		ft_putnbr_xx_fd(va_arg(args, unsigned long), 1, len);
	if (str[i] == '%')
		ft_putchar_fd('%', 1, len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			ft_putchar_fd(s[i], 1, &len);
		if (s[i] == '%' && s[i + 1])
		{
			i++;
			ft_print_type((char *)s, args, i, &len);
		}
		i++;
	}
	return (len);
}
