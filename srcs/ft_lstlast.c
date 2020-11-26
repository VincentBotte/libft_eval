/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:07:17 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 21:11:59 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_lstlast_basic(void)
{
	t_list	*l;
	t_list	*l_last;

	l = ft_lstnew("1");
	l->next = ft_lstnew("2");
	l->next->next = ft_lstnew("3");
	l_last = ft_lstlast(l);
	printf("User		: %s\n", (char *)(l_last->content));
	printf("Expected	: 3\n\n");
	free(l->next->next);
	free(l->next);
	free(l);
}

void	test_ft_lstlast_null(void)
{
	t_list	*l = NULL;

	printf("User		: %p\n", ft_lstlast(l));
	printf("Expected	: (nil)\n\n");
}

int		main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstlast_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstlast_null();
	return (0);
}
