/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:07:58 by exam              #+#    #+#             */
/*   Updated: 2018/06/28 11:33:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while ( j < size )
		{
			if (tab[i] < tab[j])
			{
				k = tab[i];
				tab[i] = tab[j];
				tab[j] = k;	
			}
			j++;
		}
		j = 0;
		i++;
	}
}
