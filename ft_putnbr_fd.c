/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:45:03 by ltranca-          #+#    #+#             */
/*   Updated: 2022/11/04 19:09:30 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{   
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = n * -1;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        n = n % 10;
    }
    if (n < 10)
        ft_putchar_fd(n + '0', fd);
}