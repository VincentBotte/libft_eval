/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:05:11 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 22:23:44 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_lstadd_back_basic(void)
{
	t_list *l;
	t_list *n;
	t_list *l_last;

	l = ft_lstnew("1");
	l->next = ft_lstnew("2");
	l->next->next = ft_lstnew("3");
	n = ft_lstnew("4");
	ft_lstadd_back(&l, n);
	l_last = ft_lstlast(l);
	printf("User		: %s\n", (char *)(l_last->content));
	printf("Expected	: 4\n\n");
	
	free(n);
	free(l->next->next);
	free(l->next);
	free(l);
}

void	test_ft_lstadd_back_null(void)
{
	t_list *l = NULL;
	t_list *n;
	t_list *l_last;

	n = ft_lstnew("1");
	ft_lstadd_back(&l, n);
	l_last = ft_lstlast(l);
	printf("User		: %s\n", (char *)(l_last->content));
	printf("Expected	: 1\n\n");
	
	free(n);
}

int		main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstadd_back_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstadd_back_null();
	return (0);
}
