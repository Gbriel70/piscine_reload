/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:38:40 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/10 13:51:15 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*cop;

	cop = malloc(ft_strlen(str) + 1);
	if (cop == NULL)
		return (NULL);
	ft_strcpy(cop, str);
	return (cop);
}
/*int main()
{
	char *ori = "teste";
	char *cop = ft_strdup(ori);

	if (cop != NULL)
	{
		printf("%s", cop);
	}
	else
		printf("string não foi copiada");
	return 0;
}*/