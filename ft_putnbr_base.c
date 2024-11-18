/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secros <secros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:12:19 by secros            #+#    #+#             */
/*   Updated: 2024/11/18 22:34:44 by secros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	hex_base(long nb, int cap)
{
	char	hex[17];

	if (cap == 0)
		ft_strlcpy(hex, "0123456789abcdef", 17);
	else
		ft_strlcpy(hex, "0123456789ABCDEF", 17);
	ft_putnbr_base(nb, hex, ft_strlen(hex), 1);
}

void	ft_putnbr_base(long nbr, char *base, int base_len, int fd)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base, base_len, fd);
	ft_putchar_fd(base[nbr % base_len], fd);
}
