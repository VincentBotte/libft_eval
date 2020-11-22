/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 04:11:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/22 21:32:30 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_strjoin_basic(void)
{
	char str1[] = "Hi!";
	char str2[] = "How are you ";
	char str3[] = "today?";
	printf("User		: %s\n", ft_strjoin(ft_strjoin(str1, str2), str3));
	printf("Expected	: Hi! How are you today?\n\n");
}

int main()
{
	printf("===== 1. Basic input =====\n");
	test_ft_strjoin_basic();
	return (0);
}
