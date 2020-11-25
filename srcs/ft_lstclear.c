/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:54:48 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 23:00:01 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

static void	del(void *to_delete)
{
	free(to_delete);
}

void		test_ft_lstclear_basic(void)
{
	t_list	*l;

	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	ft_lstclear(&l, &del);
	if (!l)
		printf("Success\n\n");
	else
		printf("Failed\n\n");
}

void		test_ft_lstclear_null(void)
{
	t_list	*l = NULL;

	ft_lstclear(&l, &del);
	if (!l)
		printf("Success\n\n");
	else
		printf("Failed\n\n");
}

int			main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstclear_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstclear_null();
	return (0);
}
