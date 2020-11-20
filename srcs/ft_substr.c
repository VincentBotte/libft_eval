/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 03:30:34 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 21:14:59 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
	char str[] = "Putain, substr c'est cool!";
	printf("User			:\n%s\nExpected		:\nsubstr c'est cool!\n", ft_substr(str, 8, 18));
	return (0);
}
