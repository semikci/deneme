/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:42:43 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/04 15:25:39 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	int	c;
	int	d;

	tmp = *a;
	*a = *b;
	*b = tmp;
	d = 48 + *a;
	c = 48 + *b;
	write(1, &d, 1);
	write(1, &c, 1);
}

int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
}
