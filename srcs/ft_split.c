/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 20:16:51 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/24 22:29:27 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_cnt(char *str, char c)
{
	size_t cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != c)
		{
			++cnt;
			while (*str && *str != c)
				++str;
		}
		++str;
	}
	return (cnt);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	char	*from;
	size_t	idx;
	size_t	size;

	if (!(ret = (char**)malloc(sizeof(char*) * get_word_cnt(s, c) + 1)))
		return (NULL);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s && *s != c)
				++s;
			size = s - from + 1;
			if (!(ret[idx] = (char*)malloc(size)))
				return (NULL);
			ft_strlcpy(ret[idx++], from, size);
		}
		++s;
	}
	ret[idx] = 0;
	return (ret);
}
