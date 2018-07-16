/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:34:34 by exam              #+#    #+#             */
/*   Updated: 2018/07/12 11:24:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

int		cycle_detector(const t_list *list)
{
	t_list	*rounda;
	t_list  *roundb;

	roundb = NULL;
	rounda = NULL;
	
	if ((list->next != NULL) && (list->next->next != NULL))
	{
		rounda = list->next;
		roundb = list->next->next;;
	}

	while ((rounda) && (roundb) && (rounda->next != NULL) && (roundb->next != NULL))
	{
		if (rounda  == roundb)
			return (1);
		rounda = rounda->next;
		roundb = roundb->next->next;
	}
	return (0);
}
