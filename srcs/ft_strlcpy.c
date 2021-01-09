/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 00:48:54 by sangh             #+#    #+#             */
/*   Updated: 2020/12/29 22:04:07 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize != 0)
		dst[i] = 0;
	while (src[i])
		++i;
	return (i);
}
