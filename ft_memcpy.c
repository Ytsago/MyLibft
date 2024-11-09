/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:33:19 by secros            #+#    #+#             */
/*   Updated: 2024/11/09 13:22:34 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main(int argc, char **argv)
{
	int i[4] = {1, 263450, 3, 4};
	int i2[4] = {0, 0, 0, 0};

	ft_memcpy(i2, i, atoi(argv[1]) * sizeof(int));
	for (int t = 0; t < 4; t++)
		printf("%d, ",i2[t]);
}*/