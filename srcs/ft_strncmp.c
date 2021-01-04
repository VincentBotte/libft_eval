/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:32:59 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/30 15:41:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{	
	char	str1[] = "R2D2";
	char	str2[] = "R2A6";
	int		len = 2;

	{
		int	ret = ft_strncmp(str1, str2, len);

		printf("User		: %d\n", ret);
	}
	{
		int	ret = strncmp(str1, str2, len);

		printf("Expected	: %d\n", ret);
	}
}

void	test2()
{	
	char	str1[] = "R2D2";
	char	str2[] = "R2A6";
	int		len = 4;

	{
		int	ret = ft_strncmp(str1, str2, len);

		printf("User		: %d\n", ret);
	}
	{
		int	ret = strncmp(str1, str2, len);

		printf("Expected	: %d\n", ret);
	}
}

void	test3()
{	
	char	str1[] = "R2A6";
	char	str2[] = "R2D2";
	int		len = 4;

	{
		int	ret = ft_strncmp(str1, str2, len);

		printf("User		: %d\n", ret);
	}
	{
		int	ret = strncmp(str1, str2, len);

		printf("Expected	: %d\n", ret);
	}
}

void	test4()
{	
	char	str1[] = "R2D2";
	char	str2[] = "R2A6";
	int		len = 8;

	{
		int	ret = ft_strncmp(str1, str2, len);

		printf("User		: %d\n", ret);
	}
	{
		int	ret = strncmp(str1, str2, len);

		printf("Expected	: %d\n", ret);
	}
}

void    test5()
{
        char    str1[] = "test\200";
        char    str2[] = "test\0";
        int             len = 6;

        {
                int     ret = ft_strncmp(str1, str2, len);

                printf("User            : %d\n", ret);
        }
        {
                int     ret = strncmp(str1, str2, len);

                printf("Expected        : %d\n", ret);
        }
}

int		main()
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
