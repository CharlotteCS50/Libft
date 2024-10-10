/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:18:15 by cschnath          #+#    #+#             */
/*   Updated: 2024/09/29 19:36:46 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
/*
int	main(void)
{
	// Should return 1
        printf("Test 0: %d\n", ft_isalnum('b'));
        printf("Test 1: %d\n", ft_isalnum('W'));
        printf("Test 2: %d\n", ft_isalnum('7'));

        // Should return 0
        printf("Test 3: %d\n", ft_isalnum('*'));
        printf("Test 4: %d\n", ft_isalnum(15));

        return (0);

}
*/