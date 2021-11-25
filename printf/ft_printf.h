/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:50:30 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 23:18:53 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putnbr_i_fd(int n, int fd, int *len);
void	ft_putnbr_u_fd(unsigned int n, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putadresse_fd(unsigned long long n, int fd, int *len);
void	ft_putnbr_x_fd(unsigned int n, int fd, int *len);
void	ft_putnbr_xx_fd(unsigned int n, int fd, int *len);
int		ft_printf(const char *s, ...);

#endif