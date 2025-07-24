/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:25:52 by jaa-s             #+#    #+#             */
/*   Updated: 2025/07/19 17:15:06 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[slen])
		slen++;
	return (slen);
}

/* #include <stdio.h>

int	main(void)
{
	char dst[10];
	size_t len = ft_strlcpy(dst, "Hello, World!", sizeof(dst));
	printf("Copied: \"%s\"\n", dst);
	printf("Length of src: %zu\n", len);
} */