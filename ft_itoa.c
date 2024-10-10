/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:31:07 by cschnath          #+#    #+#             */
/*   Updated: 2024/10/10 14:57:42 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(long n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		i;
	long	nbr;

	nbr = (long)n;
	i = count_nbr(nbr);
	array = (char *)ft_calloc(sizeof(char), i + 1);
	if (!array)
		return (0);
	array[i] = '\0';
	if (nbr < 0)
	{
		array[0] = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
		array[0] = '0';
	while (nbr > 0)
	{
		array[--i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (array);
}
/*
int	main(void){
	printf("%s\n", ft_itoa(-10004));
}*/
