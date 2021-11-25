/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:02:17 by aaouni            #+#    #+#             */
/*   Updated: 2021/11/25 19:18:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	printf("hello|%*.*d\n",6,5, 10);
	// ft_printf("hello %%%d\n", 10, 100);
	// printf("%d",ft_printf("hello %d\n", 10));
	return (0);
}
