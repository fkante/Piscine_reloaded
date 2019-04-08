/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 10:37:45 by fkante            #+#    #+#             */
/*   Updated: 2019/04/07 16:07:01 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	while (*(s1++) == *(s2++))
		if (*(s1 - 1) == '\0')
			return (0);
	return ((unsigned char)*(s1 - 1) - (unsigned char)*(s2 - 1));
}

void	ft_swap(char **a, char **b)
{
	char *t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort(char **str)
{
	int		i;
	int		r;
	char	*t;

	r = 1;
	while (r)
	{
		r = 0;
		i = 2;
		while (str[i])
		{
			if (ft_strcmp(str[i], str[i - 1]) < 0)
			{
				r = 1;
				ft_swap(&str[i], &str[i - 1]);
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 0)
		return (0);
	ft_sort(av);
	while (ac > 1)
	{
		ft_putstr(av[i]);
		i++;
		ac--;
		ft_putchar('\n');
	}
	return (0);
}
