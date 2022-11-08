/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpintook <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 09:40:15 by tpintook          #+#    #+#             */
/*   Updated: 2022/11/06 09:41:00 by tpintook         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	if (!(char)c)
		return ((char *) &s[i]);
	return (0);
}
/*int main()
{
	char str[] = "ABCD";
	char ch = 'C';
	char *result;

	result = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, result);
	return (0);
}*/
