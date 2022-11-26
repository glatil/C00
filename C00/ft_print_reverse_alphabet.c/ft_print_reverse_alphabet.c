/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatil <glatil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:05:18 by glatil            #+#    #+#             */
/*   Updated: 2022/11/25 20:12:22 by glatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}

int	main(void)

{
	ft_print_alphabet();
}
