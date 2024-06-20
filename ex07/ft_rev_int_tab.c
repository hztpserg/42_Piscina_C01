/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:29:53 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/23 15:52:36 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;

	i = 0;
	while (i < (size / 2))
	{
		e = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = e;
		i++;
	}
}
