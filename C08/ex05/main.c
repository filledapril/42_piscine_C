/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weli <weli@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:53:27 by weli              #+#    #+#             */
/*   Updated: 2024/06/09 16:04:38 by weli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(void)
{
    char *strings[] = {"Hello", "World", "This", "is", "a", "test"};
    int ac = 6;
    t_stock_str *tab = ft_strs_to_tab(ac, strings);

    if (!tab)
    {
        write(1, "Memory allocation failed\n", 25);
        return 1;
    }

    ft_show_tab(tab);

    // Free allocated memory
    for (int i = 0; i < ac; i++)
    {
        free(tab[i].copy);
    }
    free(tab);

    return 0;
}
