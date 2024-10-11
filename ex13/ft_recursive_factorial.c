/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:30:23 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/04 12:11:02 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	n = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else if (nb >= 1 && nb <= 12)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	int b = 5;
	printf("%d", ft_recursive_factorial(b));
	return 0;
}*/