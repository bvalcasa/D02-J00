/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:32:14 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/08 00:07:08 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_alphabet_minuscule(char *str)
{
	int i;

 	i = 0;
	while (str[i] != 0)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'k')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return(str);
}

char	*ft_alphabet_majuscule(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'K')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
 	ft_alphabet_minuscule(str);
 	ft_alphabet_majuscule(str);
 	return(str);
}