/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 20:16:51 by sanghkim          #+#    #+#             */
/*   Updated: 2021/01/09 21:01:09 by sanghkim         ###   ########.fr       */
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
		else
			++str;
	}
	return (cnt);
}

static char		**ft_split_free(char **ptr)
{
	int		idx;

	if (!ptr)
		return (NULL);
	idx = 0;
	while (ptr[idx])
	{
		if (ptr[idx])
			free(ptr[idx]);
		idx++;
	}
	if (ptr)
		free(ptr);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	char	*from;
	size_t	idx;

	if (!s ||
	!(ret = (char**)malloc(sizeof(char*) * (get_word_cnt((char*)s, c) + 1))))
		return (NULL);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s && *s != c)
				++s;
			if (!(ret[idx] = (char*)malloc(s - from + 1)))
				return (ft_split_free(ret));
			ft_strlcpy(ret[idx++], from, s - from + 1);
		}
		else
			++s;
	}
	ret[idx] = NULL;
	return (ret);
}

int	main(void)
{
	ft_split("asdfasdfasdf asdfasdf asdfasd fasdf", ' ');
}