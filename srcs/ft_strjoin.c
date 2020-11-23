/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 04:11:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/22 22:13:06 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_strjoin_basic(void)
{
	char str1[] = "Hi! ";
	char str2[] = "How are you ";
	char str3[] = "today?";
	printf("User		: %s\n", ft_strjoin(ft_strjoin(str1, str2), str3));
	printf("Expected	: Hi! How are you today?\n\n");
}

void	test_ft_strjoin_overlap(void)
{
	char str[] = "and hello world! 42 ";
	printf("User		: %s\n", ft_strjoin(str + 17, str));
	printf("Expected	: 42 and hello world! 42 \n\n");
}

void	test_ft_strjoin_null1(void)
{
	char str[] = "Hello world!";
	printf("User		: %s\n", ft_strjoin(NULL, str));
	printf("Expected	: (null)\n\n");
}

void	test_ft_strjoin_null2(void)
{
	char str[] = "Hello world!";
	printf("User		: %s\n", ft_strjoin(str, NULL));
	printf("Expected	: (null)\n\n");
}

int main()
{
	printf("===== 1. Basic input =====\n");
	test_ft_strjoin_basic();
	printf("===== 2. Overlapping inputs =====\n");
	test_ft_strjoin_overlap();
	printf("===== 3. NULL pointer as first parameter =====\n");
	test_ft_strjoin_null1();
	printf("===== 4. NULL pointer as second parameter =====\n");
	test_ft_strjoin_null2();
	return (0);
}
