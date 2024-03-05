/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:25:29 by astefans          #+#    #+#             */
/*   Updated: 2024/03/04 16:57:54 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;
	size_t len;

	len = ft_strlen(src);
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	else ft_memcpy(dest, src, len);
		return (dest);
}
