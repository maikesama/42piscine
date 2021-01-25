/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:00:47 by mpaci             #+#    #+#             */
/*   Updated: 2020/12/03 18:00:52 by mpaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	iterator;

	iterator = 0;
	while (src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	dest[iterator] = '\0';
	return (dest);
}
