/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_ft_is_negative.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancetico <dancetico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:06:45 by dancetico         #+#    #+#             */
/*   Updated: 2023/10/16 02:35:43 by dancetico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
        write (1, "N", 1);
    else
        write (1, "P", 1);
}

int main ()
{
    ft_is_negative(-2);
    return 0;
}