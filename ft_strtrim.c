/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 20:42:54 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/30 16:31:58 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	while (*set)
		if (c == *set)
			return (1);
		else
			++set;
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*begin;
	char	*end;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	begin = (char *)s1;
	end = begin + ft_strlen(s1);
	while (*begin && isset(*begin, set))
		++begin;
	while (begin < end && isset(*(end - 1), set))
		--end;
	size = end - begin + 1;
	if (!(str = malloc(size)))
		return (NULL);
	ft_strlcpy(str, begin, size);
	return (str);
}
