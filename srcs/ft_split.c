/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_split.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: vbotte <vbotte@student.42.fr>				+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2020/11/20 11:03:38 by vbotte			   #+#	  #+#			  */
/*	 Updated: 2020/11/20 13:46:58 by vfurmane		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		int		i;
		char	s[] = "//decoupe//moi//stp//mais//pas//trop//fort//";
		char	c = '/';
		char	**res;

		printf("User		: ");
		res = ft_split(s, c);
		i = 0;
		while (res[i])
			printf(" %s", res[i++]);
		printf("\n");
	}
	{
		printf("Expected	: decoupe moi stp mais pas trop fort\n");
	}
}

void	test2()
{
	{
		int		i;
		char	s[] = "J'aime pas les espaces, c'est clair?";
		char	c = ' ';
		char	**res;

		res = ft_split(s, c);
		printf("User		: ");
		i = 0;
		while (res[i])
			printf("%s", res[i++]);
		printf("\n");
	}
	{
		printf("Expected	: J'aimepaslesespaces,c'estclair?\n");
	}
}

void	test3()
{
	{
		int		i;
		char	s[] = "Trouve la lettre manquante et tu échappes au KO";
		char	c = 'a';
		char	**res;

		res = ft_split(s, c);
		printf("User		: ");
		i = 0;
		while (res[i])
			printf("x%s", res[i++]);
		printf("\n");
	}
	{
		printf("Expected	: xTrouve la lettre manquante et tu échxppes xu KO\n");
	}
}

void	test4()
{
	{
		int		i;
		char	s[] = "Y'a aucun séparateur, HA!";
		char	c = '-';
		char	**res;

		res = ft_split(s, c);
		printf("User		: ");
		i = 0;
		while (res[i])
			printf("%s", res[i++]);
		printf("\n");
	}
	{
		printf("Expected		: Y'a aucun séparateur, HA!\n");
	}
}

void	test5()
{
	{
		int		i;
		char	s[] = "";
		char	c = 0;
		char	**res = ft_split(s, c);

		res = ft_split(s, c);
		printf("User		: ");
		i = 0;
		while (res[i])
			printf("%s", res[i++]);
		printf("\n");
	}
	{
		printf("Expected		: \n");
	}
}

int				main()
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
