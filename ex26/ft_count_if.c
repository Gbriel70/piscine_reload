/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:40:04 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/11 10:40:40 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *));

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}

/*int starts_with_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}*/

/*int main(void)
{
	char *arr[] = {"apple", "banana", "avocado", "grape", "apricot", NULL};
	int result;

	printf("%i", ft_count_if(arr, &starts_with_a));

	return (0);
}*/