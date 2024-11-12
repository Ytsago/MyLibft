/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:50 by secros            #+#    #+#             */
/*   Updated: 2024/11/12 17:16:24 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt;

	pt = lst;
	while (pt && pt->next)
		pt = pt->next;
	return (pt);
}

// int	main()
// {
// 	t_list	*pt;
// 	int a = 1;
// 	int b = 2;
// 	pt = ft_lstnew(&a);
// 	ft_lstadd_front(&pt, ft_lstnew(&b));
// 	printf("%d", pt->content);
// }
