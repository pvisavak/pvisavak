/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvisavak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:56:39 by pvisavak          #+#    #+#             */
/*   Updated: 2024/07/14 23:44:21 by pvisavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	
}

void	ft_Wr_x(char H, char B, char T,int z)
{
	char N;

	N = 10;
	ft_putchar(H);
	z = z-1;
	if (z > 1)
	{
		while (z > 1)
		{
			ft_putchar(B);
			z = z-1;
		}
		
		ft_putchar(T);
	}
	write(1, &N, 1);

}
	
void	ft_Wr_y(int x, int y)

{
	ft_Wr_x('/', '*', '\\', x);
	y = y - 1;
	if (y > 0)
	{
		while (y > 1)
		{
			ft_Wr_x('*', ' ', '*', x);
			y = y - 1;
		}
		ft_Wr_x('\\', '*', '/', x);
	}
}

int main()
{
	ft_Wr_y(100,100);
}
