/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:33:40 by cschnath          #+#    #+#             */
/*   Updated: 2024/10/02 14:11:58 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
/*
int	main(void)
{
	int	n;
	int	i;
	int	*array;
   
	n = 5;
	i = 0;
	array = (int *)ft_calloc(n, sizeof(int));
   
	if (array == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (1);
	}
   
	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");

	free(array);
	return (0);
}
*/
