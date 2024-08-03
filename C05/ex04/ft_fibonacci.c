/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvisavak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:59:40 by pvisavak          #+#    #+#             */
/*   Updated: 2024/08/01 16:19:39 by pvisavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
}
/*int	main()
{
	printf("%d", ft_fibonacci(0));
}*/
