/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:06:42 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/19 12:50:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	int	i;

	i = -1;
	printf("UE\n");
	while (i <= 128)
	{
		{
			printf("%d", ft_isprint(i) != 0);
		}
		{
			printf("%d", isprint(i) != 0);
		}
		i++;
		printf("%c", (i + 1) % 10 == 0 ? '\n' : ' ');
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
    return 0;
}
