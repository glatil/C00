/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatil <glatil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:29:08 by glatil            #+#    #+#             */
/*   Updated: 2022/11/25 19:53:39 by glatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
