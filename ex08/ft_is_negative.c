/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:49:54 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/04 08:33:29 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	a;
	char	p;

	a = 'N';
	p = 'P';
	if (n < 0)
		ft_putchar(a);
	if (n >= 0)
		ft_putchar(p);
}

/*int main()
{
	int a = 0;
	int b = -1;
	ft_is_negative(a);
	write(1, "\n", 1);
	ft_is_negative(b);
	return 0;
}*/
