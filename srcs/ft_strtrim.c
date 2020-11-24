/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strtrim.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: vbotte <vbotte@student.42.fr>				+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2020/11/20 19:52:17 by vbotte			   #+#	  #+#			  */
/*	 Updated: 2020/11/20 19:52:34 by vbotte			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_strtrim_empty_set(void)
{
	char s[]		= "Rien à faire ici, circulez";
	char c[]		= "";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: Rien à faire ici, circulez\n\n");
	free(res);
}

void	test_ft_strtrim_empty_string(void)
{
	char s[]		= "";
	char c[]		= "<>";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: \n\n");
}

void	test_ft_strtrim_end(void)
{
	char s[]		= "!Découpes moi le<s branches j'>en peux plus<>><a>";
	char c[]		= "<>";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: !Découpes moi le<s branches j'>en peux plus<>><a\n\n");
	free(res);
}

void	test_ft_strtrim_begin_end(void)
{
	char s[]		= "<<><><D<écoupes moi le<s branches j'>en peux plu<s><>><>";
	char c[]		= "<>";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: D<écoupes moi le<s branches j'>en peux plu<s\n\n");
	free(res);
}

void	test_ft_strtrim_begin_end2(void)
{
	char s[]		= "<<<<Découpes moi les branches j'en peux plus>>>>";
	char c[]		= "<>";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: Découpes moi les branches j'en peux plus\n\n");
	free(res);
}

void	test_ft_strtrim_all_set(void)
{
	char s[] = "<<<>><<<>>";
	char c[] = "<>";
	char *res		= ft_strtrim(s, c);
	printf("User		: %s\n", res);
	printf("Expected	: \n\n");
}

int		main(void)
{
	printf("===== 1. Empty set =====\n");
	test_ft_strtrim_empty_set();
	printf("===== 2. Empty string =====\n");
	test_ft_strtrim_empty_string();
	printf("===== 3. Trim end =====\n");
	test_ft_strtrim_end();
	printf("===== 4. Trim begin and end =====\n");
	test_ft_strtrim_begin_end();
	printf("===== 5. Trim begin and end 2 =====\n");
	test_ft_strtrim_begin_end2();
	printf("===== 6. String composed entirely of char in set =====\n");
	test_ft_strtrim_all_set();
	return (0);
}
