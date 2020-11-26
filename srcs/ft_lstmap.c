/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:44:47 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 23:56:19 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

static void	del(void *to_delete)
{
	free(to_delete);
}

static void	*increment(void	*content)
{
	content = strdup("OK");
	return (content);
}

void		test_ft_lstmap_basic(void)
{
	t_list *l;
	t_list *new_l;
	int		n1;
	int		n2;

	n1 = 3;
	n2 = 1;
	l = ft_lstnew(&n1);
	l->next = ft_lstnew(&n2);
	new_l = ft_lstmap(l, &increment, &del);

	printf("%s %s\n\n", (char *)(new_l->content), (char *)(new_l->next->content));

	free(l->next);
	free(l);
	free(new_l->next);
	free(new_l);
}

void		test_ft_lstmap_null(void)
{
	t_list *l = NULL;

	ft_lstmap(l, &increment, &del);
	printf("Success\n");
}

int			main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstmap_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstmap_null();
	return (0);
}
