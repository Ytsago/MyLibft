/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:51:37 by secros            #+#    #+#             */
/*   Updated: 2024/11/12 19:15:57 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/* int main (int argc , char ** argv)
{
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d", strncmp("test\200", "test\0", 6));
	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d", strncmp(argv[1], argv[2], atoi(argv[3])));
} */