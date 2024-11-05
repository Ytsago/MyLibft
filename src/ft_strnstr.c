/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:02:49 by secros            #+#    #+#             */
/*   Updated: 2024/11/05 17:18:53 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return (big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && (j + i) < len)
			if (!little[j++])
				return (big[i]);
		i++;
		j = 0;
	}
	return ('\0');
}
