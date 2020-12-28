/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghkim <atlanboa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:03:46 by sanghkim          #+#    #+#             */
/*   Updated: 2020/12/28 16:04:50 by sanghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && *lst)
	{
		ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = 0;
	}
}