/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:30:33 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/04 20:03:12 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
		write(1, div, 1);
	}
}

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(15, 5, &div, &mod);
	write(1, d, 4);
	write(1, &div, 4);
	printf("%d,%d", div, mod);
}
