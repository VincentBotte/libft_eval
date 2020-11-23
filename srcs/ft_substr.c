/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 03:30:34 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/22 21:00:12 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_substr_basic(void)
{
	char str[] = "substr c'est cool!";
	printf("User		: %s\n", ft_substr(str, 0, 8));
	printf("Expected	: substr c\n");
}

void	test_ft_substr_basic2(void)
{
	char str[] = "substr c'est cool!";
	printf("User		: %s\n", ft_substr(str, 7, 18));
	printf("Expected	: c'est cool!\n");
}

void	test_ft_substr_zero_len(void)
{
	char str[] = "not empty";
	printf("User		: %s\n", ft_substr(str, 42, 0));
	printf("Expected	: \n");
}

void	test_ft_substr_all(void)
{
	char str[] = "the whole string please";
	size_t len = ft_strlen(str);
	printf("User		: %s\n", ft_substr(str, 0,len));
	printf("Expected	: the whole string please\n");
}

void	test_ft_substr_null_ptr(void)
{
	printf("User		: %s\n", ft_substr(NULL, 42, 42));
	printf("Expected	: (null)\n");
}

void	test_ft_substr_big_start(void)
{
	char str[] = "not empty";
	printf("User		: %s\n", ft_substr(str, 42, 10));
	printf("Expected	: (null)\n");
}

int		main(void)
{
	printf("\n===== 1 - Basic =====\n");
	test_ft_substr_basic();
	printf("\n===== 2 - Basic 2 =====\n");
	test_ft_substr_basic2();
	printf("\n===== 3 - Zero len =====\n");
	test_ft_substr_zero_len();
	printf("\n===== 4 - Whole string =====\n");
	test_ft_substr_all();
	printf("\n===== 5 - Null pointer =====\n");
	test_ft_substr_null_ptr();
	printf("\n===== 6 - Start greater than strlen =====\n");
	test_ft_substr_big_start();
	return (0);
}
