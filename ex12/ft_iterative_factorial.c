/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:29 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/04 15:27:06 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 1;
	n = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (i <= nb)
	{
		n *= i;
		i++;
	}
	return (n);
}

/*#include <stdio.h>
int main()
{
	int n = 13;
	
	printf("%d", ft_iterative_factorial(n));
	
	return 0;
}*/