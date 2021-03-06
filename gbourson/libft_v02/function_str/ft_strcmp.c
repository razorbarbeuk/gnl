/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:13:15 by gbourson          #+#    #+#             */
/*   Updated: 2015/12/15 14:46:16 by gbourson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]))
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
