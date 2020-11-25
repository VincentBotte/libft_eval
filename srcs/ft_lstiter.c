/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:28:14 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 23:43:03 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	increment(void	*n)
{
	(*(int *)n)++;
}

void	test_ft_lstiter_basic(void)
{
	t_list *l;
	int		n1;
	int		n2;

	n1 = 3;
	n2 = 1;
	l = ft_lstnew(&n1);
	l->next = ft_lstnew(&n2);
	ft_lstiter(l, &increment);
	printf("User		: %d%d\n", *(int *)(l->content), *(int *)(l->next->content));
	printf("Expected	: 42\n\n");
	free(l->next);
	free(l);
}

void	test_ft_lstiter_null(void)
{
	t_list *l = NULL;

	ft_lstiter(l, &increment);
	printf("Success\n");
}

int		main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstiter_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstiter_null();
	return (0);
}
