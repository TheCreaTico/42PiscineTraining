/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_ft_print_reverse_alphabet.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancetico <dancetico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:06:48 by dancetico         #+#    #+#             */
/*   Updated: 2023/10/16 01:28:01 by dancetico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 'a')
    {
    write (1, &c, 1);
    c--;
    }
}

int main (void)
{
    ft_print_reverse_alphabet();
    return (0);
}