/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_ft_print_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancetico <dancetico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:06:17 by dancetico         #+#    #+#             */
/*   Updated: 2023/10/16 01:02:00 by dancetico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
    write (1, &c, 1);
    c++;
    }
}

int main (void)
{
    ft_print_alphabet();
    return (0);
}