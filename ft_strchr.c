/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:41:50 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/29 20:04:37 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s;
	while (*cur != c)
	{
		if (*cur == 0)
			return (NULL);
		cur++;
	}
	return (cur);
}
