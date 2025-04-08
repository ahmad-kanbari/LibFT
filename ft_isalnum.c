/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:08:54 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/09 19:52:45 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c = ' ';
//     printf("is it ft_isalnum %d\n", ft_isalnum(c));
//     printf("is ft_isalnum original %d\n",isalnum(c));

//     return (0);
// }
