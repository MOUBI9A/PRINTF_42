/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-moue <hel-moue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:05:21 by hel-moue          #+#    #+#             */
/*   Updated: 2024/12/24 13:24:02 by hel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbr(long n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		n *= -1;
		ret += ft_putchar('-');
	}
	if (n > 9)
		ret += ft_putnbr(n / 10);
	ret += ft_putchar((n % 10) + 48);
	return (ret);
}
