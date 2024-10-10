/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:46:41 by cschnath          #+#    #+#             */
/*   Updated: 2024/09/29 19:42:14 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
/*
int	main(void)
{
	// Should return 1
        printf("Test 0: %d\n", ft_isprint('b'));
        printf("Test 1: %d\n", ft_isprint(' '));
        printf("Test 2: %d\n", ft_isprint('+'));

        // Should return 0
        printf("Test 3: %d\n", ft_isprint('\n'));
        printf("Test 4: %d\n", ft_isprint('\0'));

        return (0);
}
*/