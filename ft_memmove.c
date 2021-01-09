/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:55:24 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/29 20:43:12 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		d = (char *)dst + len - 1;
		s = (char *)src + len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
