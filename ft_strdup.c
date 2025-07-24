/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:57:53 by jaa-s             #+#    #+#             */
/*   Updated: 2025/07/22 18:04:58 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (s1[l])
		l++;
	dup = (char *)malloc(sizeof(char) * (l + 1));
	if (!dup)
		return (NULL);
	while (i < l)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *dup = ft_strdup("wellgoing");
// 	printf("%s", dup);
// 	free(dup);
// }