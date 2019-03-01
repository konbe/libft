/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 18:15:06 by kbelov            #+#    #+#             */
/*   Updated: 2019/02/28 21:12:28 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	if ((*s1 == '\0' || *s2 == '\0') && *s1 != *s2)
		return (0);
	while (*s1 && *s2)
	{
		if (s1 != s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
