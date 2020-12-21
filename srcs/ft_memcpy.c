/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:57:53 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/21 18:13:14 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dst == src || n == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
