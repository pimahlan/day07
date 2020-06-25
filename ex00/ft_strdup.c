/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:40:34 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/25 08:44:07 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	ft_strlen(char *str)
{
	int i;
	i= 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		temp_src;
	int		i;

	i = 0;
	temp_src = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (temp_src + 1));
	while (i < temp_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char *test = "we think code";
	char *copy;

	copy = ft_strdup(test);
	printf("%s\n", test);
	printf("%s\n", copy);
	return (0);
}

