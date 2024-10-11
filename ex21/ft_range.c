/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:37:33 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/10 14:10:43 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	tam;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	tam = max - min;
	arr = malloc(sizeof(int) * tam);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*int	main(void)
{
	int min = 2;
	int max = 5;

	int *range = ft_range(min, max);
	int i = 0;

	while (i < (max - min))
	{
		printf("%i", range[i]);
		i++;
	}

	return (0);
}*/