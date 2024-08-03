/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvisavak <pvisavak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:19:24 by pvisavak          #+#    #+#             */
/*   Updated: 2024/08/01 23:59:29 by pvisavak         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
int	main(void)
{
	printf("%d", ft_sqrt(169));
}
