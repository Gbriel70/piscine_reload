/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:40:09 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/04 08:34:39 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int	main()
{
	int a = 2;
	int b = 3;
	printf("%d%d", a, b);
	ft_swap(&a, &b);
	printf("%d%d", a, b);
	
	return 0;
}*/