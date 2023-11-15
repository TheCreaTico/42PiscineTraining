/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03_ft_print_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancetico <dancetico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:32:33 by dancetico         #+#    #+#             */
/*   Updated: 2023/10/16 01:53:36 by dancetico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char c;

    c = 0;
    while (c <= '9')
    {
        write (1, &c, 1);
        c++;
    }

}

int main (void)
{
    ft_print_numbers();
    return (0);
}