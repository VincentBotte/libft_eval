/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:47:39 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/30 12:09:49 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	char	str[] = "Hello World";
	char	find[] = "lo W";
	size_t	len = 11;

	{
		char	*ptr;
		
		ptr = ft_strnstr(str, find, len);
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	*ptr;
		
		ptr = strnstr(str, find, len);
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test2()
{
	char	str[] = "Hello World";
	char	find[] = "elo";
	size_t	len = 11;

	{
		char	*ptr;
		
		ptr = ft_strnstr(str, find, len);
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	*ptr;
		
		ptr = strnstr(str, find, len);
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test3()
{
	char	str[] = "Hello World";
	char	find[] = "Wo";
	size_t	len = 4;

	{
		char	*ptr;
		
		ptr = ft_strnstr(str, find, len);
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	*ptr;
		
		ptr = strnstr(str, find, len);
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test4()
{
	char	str[] = "Hello World";
	char	find[] = "";
	size_t	len = 11;

	{
		char	*ptr;
		
		ptr = ft_strnstr(str, find, len);
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	*ptr;
		
		ptr = strnstr(str, find, len);
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void    test5()
{
        char    str[] = "Hello World";
        char    find[] = "World";
        size_t  len = 8;

        {
                char    *ptr;

                ptr = ft_strnstr(str, find, len);
                if (!ptr)
                        printf("User            : Not found\n");
                else
                        printf("User            : (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
        }
        {
                char    *ptr;

                ptr = strnstr(str, find, len);
                if (!ptr)
                        printf("Expected        : Not found\n");
                else
                        printf("Expected        : (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
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
