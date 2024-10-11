/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:02:07 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/10 13:43:50 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			swap = av[i];
			av[i] = av[i + 1];
			av[i + 1] = swap;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		ft_sort_params(ac, av);
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
