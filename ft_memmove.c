/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:15:42 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/26 15:39:57 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)

{	char	*buff;
	char	*buff2;

	buff = (char *)dest;
	buff2 = (char *)src;
	if (buff == '\0' && buff2 == '\0')
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, size);
	else 
	{
		while (size > 0)
		{
			size--;
			buff[size] = buff2[size];
		}
	}
	return (dest);
}

