/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begencer <begencer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:02:37 by begencer          #+#    #+#             */
/*   Updated: 2023/09/03 15:04:54 by begencer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void rush(int x, int y)
{
   int a = 1;
   while (a<=y)
   {
    int b = 1;
    while (b <= x)
    {
        if((b == 1 && a== 1) || (b == x && a == 1))
            ft_putchar('A');
        else if ((a < y && a > 1) && (b < x && b > 1 ))
            write(1," ",1);
        else if ((b == 1 &&  a == y) || (x == b && y == a))
            ft_putchar('C');
        else
            ft_putchar('B');
        b++;
    }
    write(1, "\n",1);
    a++;
   }
}