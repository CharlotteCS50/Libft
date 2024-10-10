/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:57:11 by cschnath          #+#    #+#             */
/*   Updated: 2024/10/02 14:58:40 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
// zu for unsigned long
int	main(void)
{
	char dst[100] = "Hello";
	char src[100] = "Good morning!";

	// Should both return 13 (size of copied string)
	printf("%zu\n", ft_strlcpy(dst, src, 12));
        printf("%zu\n", ft_strlcpy(dst, src, 5));

	return (0);
}
*/
