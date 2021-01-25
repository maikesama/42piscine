/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaci <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:17:33 by mpaci             #+#    #+#             */
/*   Updated: 2020/12/06 16:17:36 by mpaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i - 1] <= 47 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 58 && str[i] <= 64 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 91 && str[i] <= 96 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 123 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
