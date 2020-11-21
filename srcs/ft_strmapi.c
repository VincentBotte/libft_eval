/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:38:01 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/21 12:46:34 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

char	ft_test(unsigned int i, char c)
{
	return (c + i);
}

void 	test1()
{
	{
		printf("User		: %s\n", ft_strmapi("Salut", &ft_test));
	}
	{
		printf("Expected	: Sbnxx\n");
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	return (0);
}
