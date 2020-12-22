/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:18:19 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/22 15:25:23 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;
	
	result = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
		result = result * 10 + (*(str++) - '0');
	return (result * sign);
}