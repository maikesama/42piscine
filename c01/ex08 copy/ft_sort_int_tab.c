/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:32:37 by mpaci             #+#    #+#             */
/*   Updated: 2020/12/02 20:32:41 by mpaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int tabx, int taby)
{
	int temp;

	temp = tab[tabx];
	tab[tabx] = tab[taby];
	tab[taby] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		iterator;
	char	boolean;

	boolean = 0;
	iterator = 0;
	while (iterator < size - 1)
	{
		if (tab[iterator] > tab[iterator + 1])
		{
			ft_swap(tab, iterator, iterator + 1);
			boolean = 1;
		}
		iterator++;
	}
	if (boolean == 1)
	{
		ft_sort_int_tab(tab, size);
	}
}
