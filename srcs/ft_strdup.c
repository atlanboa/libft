/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:47:06 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/22 15:50:18 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dst;

	len = ft_strlen(s);
	if (!(dst = malloc(len + 1)))
		return (0);
	ft_memcpy(dst, s, len);
	dst[len] = 0;
	return (dst);
}