/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:52:17 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 19:52:34 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test1()
{
	{
		char s[]        = "Rien à faire ici, circulez";
		char c[]        = "";
		char *res       = ft_strtrim(s, c);
		printf("User                    : %s\n", res);
	}
	{
		printf("Expected                : Rien à faire ici, circulez\n");
	}
}


void    test2()
{
	{
		char s[]        = "";
		char c[]        = "<>";
		char *res       = ft_strtrim(s, c);
		printf("User                    : %s\n", res);
	}
	{
		printf("Expected                : \n");
	}
}


void    test3()
{
	{
		char s[]        = "!Découpes moi le<s branches j'>en peux plus<>><a>";
		char c[]        = "<>";
		char *res       = ft_strtrim(s, c);
		printf("User                    : %s\n", res);
	}
	{
		printf("Expected                : !Découpes moi le<s branches j'>en peux plus<>><a\n");
	}
}

void    test4()
{
	{
		char s[]        = "<<><><D<écoupes moi le<s branches j'>en peux plu<s><>><>";
		char c[]        = "<>";
		char *res       = ft_strtrim(s, c);
		printf("User                    : %s\n", res);
	}
	{
		printf("Expected                : D<écoupes moi le<s branches j'>en peux plu<s\n");
	}
}

void    test5()
{
	{
		char s[]        = "<<<<Découpes moi les branches j'en peux plus>>>>";
		char c[]        = "<>";
		char *res       = ft_strtrim(s, c);
		printf("User                    : %s\n", res);
	}
	{
		printf("Expected                : Découpes moi les branches j'en peux plus\n");
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
