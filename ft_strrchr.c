/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:51:14 by jaa-s             #+#    #+#             */
/*   Updated: 2025/07/19 17:22:05 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		last;
	char	m;
	int		j;

	i = 0;
	last = 0;
	str = (char *)s;
	m = (char)c;
	j = 0;
	while (str[i])
	{
		if (str[i] == m)
		{
			j++;
			last = i;
		}
		i++;
	}
	if (str[i] == '\0' && m == '\0')
		return (&str[i]);
	if (j == 0)
		return (NULL);
	return (&str[last]);
}
