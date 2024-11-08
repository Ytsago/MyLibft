/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:45:04 by secros            #+#    #+#             */
/*   Updated: 2024/11/08 18:35:27 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f((unsigned int)i, s);
		i++;
	}
}

int main ()
{
	char	s[]= "0000000000";
	printf("%s", ft_striteri(s, iter));
}