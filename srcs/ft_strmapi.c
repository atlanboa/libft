/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 22:48:18 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/30 17:09:45 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	idx;

	if (!s || !f || !(str = malloc(ft_strlen(s) + 1)))
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		str[idx] = f(idx, s[idx]);
		++idx;
	}
	str[idx] = '\0';
	return (str);
}
