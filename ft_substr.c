/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:48:05 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/30 16:30:44 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s || !len || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (!(str = malloc(++len)))
		return (NULL);
	ft_strlcpy(str, (char *)&s[start], len);
	return (str);
}
