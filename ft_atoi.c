/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:18:19 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/30 18:59:53 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		digit;

	digit = 0;
	result = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*(str++) - '0');
		++digit;
	}
	if (digit >= 20)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return ((int)result * sign);
}
