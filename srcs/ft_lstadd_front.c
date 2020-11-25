/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:31:28 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 20:42:46 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_lstadd_front_basic(void)
{
	t_list *l = ft_lstnew("second");
	t_list *n = ft_lstnew("first");

	ft_lstadd_front(&l, n);
	printf("User		: %s\n", (char *)(l->content));
	printf("Expected	: first\n\n");
	free(l->next);
	free(l);
}

void	test_ft_lstadd_front_null(void)
{
	t_list *l = NULL;
	t_list *n = ft_lstnew("first");

	ft_lstadd_front(&l, n);
	printf("User		: %s\n", (char *)(l->content));
	printf("Expected	: first\n\n");
	free(l->next);
	free(l);
}

int		main(void)
{
	printf("===== 1. Basic input =====\n");
	test_ft_lstadd_front_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstadd_front_null();
	return (0);
}
