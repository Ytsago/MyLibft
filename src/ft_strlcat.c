/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:41:01 by secros            #+#    #+#             */
/*   Updated: 2024/11/05 15:06:58 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + dst_len);
	dst[size] = '\0';
	while (size-- > dst_len)
		dst[size] = src[size - dst_len];
	return (dst_len + ft_strlen(src));
}
