/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:36:26 by cschnath          #+#    #+#             */
/*   Updated: 2024/09/29 19:34:47 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(void)
{
	// Should return 1
        printf("Test 0: %d\n", ft_isalpha('b'));
        printf("Test 1: %d\n", ft_isalpha('W'));
        printf("Test 2: %d\n", ft_isalpha('z'));

        // Should return 0
        printf("Test 3: %d\n", ft_isalpha('?'));
        printf("Test 4: %d\n", ft_isalpha(-1));

        return (0);
}
*/