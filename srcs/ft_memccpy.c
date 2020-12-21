/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:22:44 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/21 19:32:55 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;
	size_t		idx;

	if (dst == src || n)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	idx = 0;
	while (idx < n)
	{
		d[idx] = s[idx];
		if (d[idx] == c)
			return (d + idx + 1);
		idx++;
	}
	return (NULL);
}