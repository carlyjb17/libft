/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:26:53 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/26 15:07:51 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *a, size_t size)

{
  size_t n;
  char *b;

  b = (char *)a;
  n = 0;
  while(n <= size  - 1)
    {
      if (size <= 0)
        break ;
      b[n] = '\0';
      n++;
    }
}