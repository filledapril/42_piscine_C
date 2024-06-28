/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weli <weli@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:29:10 by weli              #+#    #+#             */
/*   Updated: 2024/06/09 16:09:10 by weli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	print_num(int n)
{
	char	value;
	long	num;

	num = n;
	if (num < 10)
	{
		value = num + '0';
		write(1, &value, 1);
	}
	else
	{
		print_num(num / 10);
		value = (num % 10) + '0';
		write(1, &value, 1);
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print(par[i].str);
		print_num(par[i].size);
		print(par[i].copy);
		i++;
	}
}
