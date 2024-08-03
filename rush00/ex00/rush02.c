/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phvasuth <phvasuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:40:12 by phvasuth          #+#    #+#             */
/*   Updated: 2024/07/13 13:44:29 by phvasuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_x(char h, char b, char t, int z)
{
	char	n;

	n = 10;
	ft_putchar(h);
	z = z - 1;
	if (z > 0)
	{
		while (z > 1)
		{
			ft_putchar(b);
			z = z - 1;
		}
		ft_putchar(t);
	}
	write(1, &n, 1);
}

void	rush(int x, int y)
{
	ft_write_x('A', 'B', 'A', x);
	y = y - 1;
	if (y > 0)
	{
		while (y > 1)
		{
			ft_write_x('B', ' ', 'B', x);
			y = y - 1;
		}
		ft_write_x('C', 'B', 'C', x);
	}
}
