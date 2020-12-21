/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 19:43:57 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/21 19:45:51 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cur;

	cur = (char *)s;
	while (n--)
	{
		if (*cur == c)
			return (cur);
		cur++;
	}
	return (NULL);
}
