/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:45:03 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/05 14:56:36 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include <sys/_types/_null.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
					size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (p)
		return (ft_mempcpy(dst, src, p - src + 1));
	ft_memcpy(dst, src, n);
	return (NULL);
}
