/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 20:42:54 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/23 21:27:00 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const c, char const *set)
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
	int		size;

	begin = (char *)s1;
	end = begin + ft_strlen(s1) - 1;
	while (*begin && !isset(*begin, set))
		++begin;
	while (begin < end && !isset(*end, set))
		--end;
	size = end - begin + 1;
	if (!(str = malloc(size)))
		return (NULL);
	if (size == 1)
		return (ft_strdup(" "));
	ft_strlcpy(str, begin, size);
	return (str);
}
