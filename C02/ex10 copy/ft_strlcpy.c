/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:26:40 by mpaci             #+#    #+#             */
/*   Updated: 2020/12/06 17:26:43 by mpaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	iterator;

	iterator = 0;
	while (src[iterator] != '\0' && iterator < size - 1)
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	dest[iterator] = '\0';
	return (iterator + 1);
}
