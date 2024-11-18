/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:32:25 by secros            #+#    #+#             */
/*   Updated: 2024/11/18 21:35:38 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(long nbr, int fd)
{
	if (nbr > 9)
		ft_putnbr_rec(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + 48, fd);
}

void	ft_putnbr_fd(long nbr, int fd)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr_rec(nbr, fd);
}
