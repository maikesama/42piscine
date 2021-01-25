/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:38:25 by mpaci             #+#    #+#             */
/*   Updated: 2020/12/02 18:38:28 by mpaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int tabx, int taby)
{
	int temp;

	temp = tab[tabx];
	tab[tabx] = tab[taby];
	tab[taby] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;

	counter = size - 1;
	while (counter > (size / 2))
	{
		ft_swap(tab, counter, size - 1 - counter);
		counter--;
	}
}
