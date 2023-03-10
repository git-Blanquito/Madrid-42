/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:26:39 by aiblanco          #+#    #+#             */
/*   Updated: 2022/09/22 19:31:00 by aiblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c > 255)
		c = c - ((c / 256) * 256);
	while ((*s != '\0') && (*s != c))
		s++;
	if (*s == c || c == 0)
		return ((char *)s);
	return (0);
}

/* int	main(void)
{
	printf("%c",132);
	return (0);
} */