/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:09:04 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 20:09:17 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void test1()
{
	{
		int     i = 2147483647;
		char    *res = ft_itoa(i);
		printf("User                            : %s\n", res);
	}
	{
		printf("Expected                        : 2147483647\n");
	}
}

void    test2()
{
	{
		int     i = -2147483648;
		char    *res = ft_itoa(i);
		printf("User                            : %s\n", res);
	}
	{
		printf("Expected                        : -2147483648\n");

	}
}

void    test3()
{
	{
		int     i = 0;
		char    *res = ft_itoa(i);
		printf("User                            : %s\n", res);
	}
	{
		printf("Expected                        : 0\n");

	}
}

void    test4()
{
	{
		int     i = -0;
		char    *res = ft_itoa(i);
		printf("User                            : %s\n", res);
	}
	{
		printf("Expected                        : 0\n");

	}
}

void    test5()
{
	{
		int     i = 10;
		char    *res = ft_itoa(i);
		printf("User                            : %c\n", res[2] + 48);
	}
	{
		printf("Expected                        : 0\n");

	}
}

int             main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
	printf("===== TEST5 =====\n\n");
	test5();
	return (0);
}
