/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:39:19 by marvin            #+#    #+#             */
/*   Updated: 2023/09/05 22:39:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int boyut;
	boyut = 0;
	while(str[boyut] != '\0')
	{
		boyut++;
	}
	return boyut;
}

int main(void)
{
	char *a;
	a = "abcdfgh";
	printf("%d",ft_strlen(a));
}