/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:57:06 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/04 08:35:03 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main()
{
	int a = 2;
	int b = 2;
	int divi;
	int modo;

	int *div = &divi;
	int *mod = &modo;

	ft_div_mod(a, b, div, mod);
	
	printf("%d", *div);
	printf("%d", *mod);
	
	return 0;
}*/