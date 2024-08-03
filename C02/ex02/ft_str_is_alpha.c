/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvisavak <pvisavak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:37:32 by pvisavak          #+#    #+#             */
/*   Updated: 2024/07/24 17:32:51 by pvisavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z')) || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	s[] = "yummy";

// 	printf("%d", ft_str_is_alpha(s));
// }