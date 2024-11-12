/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:21:26 by secros            #+#    #+#             */
/*   Updated: 2024/11/12 19:23:28 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

/* int main ()
{
	char *file = "./Test";
	int	fd;
	fd = open(file, O_WRONLY);
	ft_putstr_fd("Bonjour monde", fd);
} */