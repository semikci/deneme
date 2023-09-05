/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:48:47 by marvin            #+#    #+#             */
/*   Updated: 2023/09/05 21:48:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
		printf("%d, %d", *a, *b);
}

int main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
}