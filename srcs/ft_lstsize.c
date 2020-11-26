/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:50:16 by echin             #+#    #+#             */
/*   Updated: 2020/11/25 20:54:01 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test_ft_lstsize_basic(void)
{
	t_list	*l;

	l = ft_lstnew("1");
	l->next = ft_lstnew("2");
	l->next->next = ft_lstnew("3");
	printf("User		: %d\n", ft_lstsize(l));
	printf("Expected	: 3\n\n");
	free(l->next->next);
	free(l->next);
	free(l);
}

void	test_ft_lstsize_null(void)
{
	t_list	*l = NULL;

	printf("User		: %d\n", ft_lstsize(l));
	printf("Expected	: 0\n\n");
}

int		main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_lstsize_basic();
	printf("===== 2. Null lst =====\n");
	test_ft_lstsize_null();
	return (0);
}
