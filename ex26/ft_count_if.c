/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:36:26 by fkante            #+#    #+#             */
/*   Updated: 2019/04/04 15:26:57 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			y++;
		i++;
	}
	return (y);
}
