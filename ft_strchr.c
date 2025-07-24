/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:00:24 by jaa-s             #+#    #+#             */
/*   Updated: 2025/07/17 14:50:00 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	const char *s = "Hello, world!";
	char *res = ft_strchr(s, 'o');
	if (res)
		printf("Found: %s\n", res);  // Output: "o, world!"
	else
		printf("Not found\n");

	res = ft_strchr(s, '\0');
	if (res)
		printf("Null terminator found at index: %ld\n", res - s);
}*/