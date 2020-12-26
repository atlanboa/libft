/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 22:28:32 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/24 22:47:49 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	get_len_of_n(int n)
{
	size_t	len;
	
	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tmp;

	len = get_len_of_n(n) + 1 + (n > 0 ? 0 : 1);
	tmp = n * (n > 0 ? 1 : -1);
	if (!(str = malloc(len)))
		return (NULL);
	str[len] = '\0';
	while (tmp)
	{
		str[--len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (n < 0)
		str[len] = '-';
	return (str);
}