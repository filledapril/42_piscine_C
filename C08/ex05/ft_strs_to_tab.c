/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:07:42 by weli              #+#    #+#             */
/*   Updated: 2024/06/09 15:23:44 by weli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	get_len(char *str)
{	
	int	len;
	
	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int		i;
	t_stock_str	*result;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;	
	while (i < ac)
	{
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		result[i].size = get_len(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
