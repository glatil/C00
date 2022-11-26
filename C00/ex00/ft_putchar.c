/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatil <glatil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:35:25 by glatil            #+#    #+#             */
/*   Updated: 2022/11/25 19:27:15 by glatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	ft_putchar('c');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}