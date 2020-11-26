/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:39:26 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 22:44:55 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

static int	g_delone_called;
static void	del(void *to_delete)
{
	free(to_delete);
	g_delone_called = 1;
}

void		test_ft_lstdelone_basic(void)
{
	t_list	*l;

	l = ft_lstnew(malloc(10));
	g_delone_called = 0;
	ft_lstdelone(l, &del);
	if (g_delone_called)
		printf("Success\n\n");
	else
		printf("Failed\n\n");
}

int			main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstdelone_basic();
	return (0);
}
