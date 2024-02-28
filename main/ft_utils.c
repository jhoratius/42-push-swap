/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <jhoratiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:53:29 by jhoratiu          #+#    #+#             */
/*   Updated: 2024/02/26 16:50:42 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/pushswap.h"

int		ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

long int		ft_atoi(const char *str)
{
	int			i;
	int			signe;
	long int	n;

	i = 0;
	signe = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i += 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i += 1;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		n = n * 10 + str[i] - 48;
		i += 1;
	}
	return (n * signe);
}

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (s);
}