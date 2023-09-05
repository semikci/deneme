/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:44:22 by marvin            #+#    #+#             */
/*   Updated: 2023/09/05 22:44:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;
	int c;
	i = 0;
	c = size - 1;
	while(i < (size/2))
	{
		a = tab[i];
		tab[i] = tab[c];
		tab[c] = a;
		c--;
		i++;
	}
	i = 0;
	while(i < size)
	{
	printf("%d",tab[i]);
		i++;
	}


}

int main(void)
{
	int boyut;
	int str[] = {1, 2, 3, 4, 5, 6, 7, 8};
	boyut = 8;
	ft_rev_int_tab(str, boyut);
}
