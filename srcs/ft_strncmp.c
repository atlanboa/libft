/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:57:05 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/29 20:05:00 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (*s1 != '\0' && *s2 != '\0' && len < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		s1++;
		s2++;
		len++;
	}
	if (len == n)
		return (*(unsigned char*)(s1 - 1) - *(unsigned char*)(s2 - 1));
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
