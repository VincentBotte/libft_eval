/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:02:38 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 20:17:15 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_lstnew_int(void)
{
	int 	n = 42;
	t_list 	*lst_elm = ft_lstnew(&n);
	printf("User		: %d\n", *(int *)(lst_elm->content));
	printf("Expected	: 42\n\n");
	free(lst_elm);
}

void	test_ft_lstnew_string(void)
{
	char 	s[] = "Hello!";
	t_list 	*lst_elm = ft_lstnew(s);
	printf("User		: %s\n", (char *)(lst_elm->content));
	printf("Expected	: Hello!\n\n");
	free(lst_elm);
}

void	test_ft_lstnew_null(void)
{
	t_list 	*lst_elm = ft_lstnew(NULL);
	printf("User		: %p\n", lst_elm->content);
	printf("Expected	: (nil)\n\n");
	free(lst_elm);
}

int		main(void)
{
	printf("===== 1. Int input =====\n");
	test_ft_lstnew_int();
	printf("===== 2. String input =====\n");
	test_ft_lstnew_string();
	printf("===== 3. Null input =====\n");
	test_ft_lstnew_null();
	return (0);
}
