/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:32:37 by secros            #+#    #+#             */
/*   Updated: 2024/11/05 13:17:51 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
/*
int	ft_isalpha(int c);

int	alpha_check(void)
{
	T_CHECK(ft_isalpha('Z'));
	F_CHECK(ft_isalpha('8'));
	T_CHECK(ft_isalpha('a'));
	F_CHECK(ft_isalpha('z' + 1));
	return (1);
}*/
void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char s[50] = "zzzzzzzzzazzzzzzzzzzzzzzzzzzzzz";
	printf("%c\n",*(s + 9));
	ft_memset(s, 122, 49);
	printf("%s", s);
}
