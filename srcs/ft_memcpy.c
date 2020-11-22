/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 19:10:10 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/22 16:15:39 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1(void)
{
	char	str[] = "Hello world and 42";

	{
		char	buffer[6];

		ft_memcpy(buffer, str, 6);
		buffer[5] = '\0';
		printf("User		: %s\n", buffer);
	}
	{
		char	buffer[6];

		memcpy(buffer, str, 6);
		buffer[5] = '\0';
		printf("Expected	: %s\n", buffer);
	}
}

void	test2(void)
{
	{
		char	str[] = "Hello world and 42";

		ft_memcpy(str + 2, str, 6);
		printf("User		: %s\n", str);
	}
	{
		char	str[] = "Hello world and 42";

		memcpy(str + 2, str, 6);
		printf("Expected	: %s\n", str);
	}
}

void	test3(void)
{
	{
		char	str[] = "Hello world and 42";

		ft_memcpy(str, str + 2, 6);
		printf("User		: %s\n", str);
	}
	{
		char	str[] = "Hello world and 42";

		memcpy(str, str + 2, 6);
		printf("Expected	: %s\n", str);
	}
}

void	test4(void)
{
	int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };

	{
		int	buffer[7];

		ft_memcpy(buffer, arr, 7 * sizeof(*buffer));
		printf("User		: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
	{
		int	buffer[7];

		memcpy(buffer, arr, 7 * sizeof(*buffer));
		printf("Expected	: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
}

int		main(void)
{
	printf("===== TEST1 =====\n");
	test1();
	printf("\n===== TEST2 =====\nOverlapping memory (dest > src)\n\n");
	test2();
	printf("\n===== TEST3 =====\nOverlapping memory (dest < src)\n\n");
	test3();
	printf("\n===== TEST4 =====\n");
	test4();
	return (0);
}
