/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:23:34 by cschnath          #+#    #+#             */
/*   Updated: 2024/10/10 13:40:29 by cschnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Parameters s: The string from which to create the substring
start: The start index of the substring in the string ’s’
len: The maximum length of the substring

Return value: The substring. NULL if the allocation fails

External functions: malloc

Description: Allocates memory with malloc and
returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			leng;
	char			*sub;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		leng = ft_strlen(s) - start;
	else
		leng = len;
	sub = (char *)ft_calloc(sizeof(char), (leng + 1));
	while (s[i] && i <= ft_strlen(s))
	{
		if (i >= start && j < leng)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	leng = 0;
	return (sub);
}
/*
int	main(void)
{
	
	printf("%s\n", ft_substr());
}
*/
