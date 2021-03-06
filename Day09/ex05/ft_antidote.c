/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 22:48:39 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 15:48:43 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((j > k && j < i) || (j < k && j > i))
		return (j);
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	if ((k > i && k < j) || (k < i && k > j))
		return (k);
	return (0);
}
