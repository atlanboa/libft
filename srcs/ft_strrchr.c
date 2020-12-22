/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:41:50 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/22 14:22:44 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s + ft_strlen(s);
	while (*cur == c)
	{
		if (cur == s)
			return (NULL);
		cur--;
	}
	return (cur);
}