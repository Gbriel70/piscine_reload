/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:48 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/11 10:55:38 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

/*void ft_putnbr(int nbr)
{
	long	n;
	char	c;
	int		i;
	int		i;

	n = nbr;
	if (n  < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int arr[] = {1, -2, 3, 42, -99};  // Array de inteiros para teste
	int length = 5;                   // Tamanho da array

	// Aplica ft_putnbr a cada elemento da array
	ft_foreach(arr, length, &ft_putnbr);

	// Escreve uma nova linha após imprimir os números
	write(1, "\n", 1);

	return (0);
}*/