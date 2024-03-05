/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:12:56 by astefans          #+#    #+#             */
/*   Updated: 2024/03/01 22:37:10 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t	i;

	if (dst == (void *)0 && src == (void *)0)
		return ('\0');
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	i = 0;
	if (tmp_dst > tmp_src)
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	else
	{
		while (i++ < n)
			tmp_dst[i] = tmp_src[i];
	}
	return (dst);
}
