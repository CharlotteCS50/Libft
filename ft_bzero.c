/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:50:07 by cschnath          #+#    #+#             */
/*   Updated: 2024/10/02 14:04:52 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	// Test 1:
	char str1[50] = "Hello, World!";
	printf("Test 1 before: %s\n", str1);
	ft_bzero(str1, 12); // Empties str1 after the first 12 bytes
	printf("Test 1 after: %s\n", str1);

	// Test 2:
	char str2[50] = "Hello Málaga!";
	printf("\nTest2 before: %s\n", str2);
	ft_bzero(str2, 5); // Empties str2 after the first 5 bytes
	printf("Test 2 after: %s\n", str2);

	// Test 3:
	char str3[50] = "abcdefghijklmnopqrstuvwxyz";
	printf("\nTest 3 before: %s\n", str3);
	ft_bzero(str3, 3); // Empties str3 after the first 3 bytes
	printf("Test 3 after: %s\n", str3);

	return (0);
}
*/
