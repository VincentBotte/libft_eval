/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:56:11 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 13:08:32 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	int	i;
	int	len;

	len = 5;
	{
		int	*ptr;

		printf("User		: ");
		ptr = ft_calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
	{
		int	*ptr;

		printf("Expected	: ");
		ptr = calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
}

void	test2()
{
	int	i;
	int	len;

	len = 0;
	{
		int	*ptr;

		printf("User		: ");
		ptr = ft_calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
	{
		int	*ptr;

		printf("Expected	: ");
		ptr = calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
}

void	test3()
{
	int	i;
	int	len;

	len = -5;
	{
		int	*ptr;

		printf("User		: ");
		ptr = ft_calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
	{
		int	*ptr;

		printf("Expected	: ");
		ptr = calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
}

void	test4()
{
	unsigned long int	i;
	unsigned long int	len;

	len = 9223372036854775807;
	{
		int	*ptr;

		printf("User		: ");
		ptr = ft_calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
	{
		int	*ptr;

		printf("Expected	: ");
		ptr = calloc(len, sizeof(*ptr));
		if (ptr)
		{
			i = 0;
			while (i < len)
				printf("%d", ptr[i++]);
		}
		else
			printf("NULL");
		printf("\n");
	}
}

int main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
	return 0;
}
