/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00_ft_putchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancetico <dancetico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 23:12:46 by dancetico         #+#    #+#             */
/*   Updated: 2023/10/15 23:28:37 by dancetico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

int main (void)
{
    ft_putchar ('T');
    return (0);
}