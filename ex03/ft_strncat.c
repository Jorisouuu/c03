/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:44:50 by jporet            #+#    #+#             */
/*   Updated: 2022/06/23 14:14:16 by jporet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0' && n > 0)
	{
		*dst = *(unsigned char*)src;
		dst++;
		src++;
		n--;
	}
	*dst = '\0';
	return (dest);
}
