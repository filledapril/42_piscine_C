/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weli <weli@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:20:18 by weli              #+#    #+#             */
/*   Updated: 2024/06/09 15:21:56 by weli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(void)
{
    char *strings[] = {"Hello", "World", "This", "is", "a", "test"};
    int ac = 6;
    t_stock_str *tab = ft_strs_to_tab(ac, strings);

    if (!tab)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < ac; i++)
    {
        printf("Original: %s\n", tab[i].str);
        printf("Copy: %s\n", tab[i].copy);
        printf("Size: %d\n\n", tab[i].size);
    }

    // Free allocated memory
    for (int i = 0; i < ac; i++)
    {
        free(tab[i].copy);
    }
    free(tab);

    return 0;
}
