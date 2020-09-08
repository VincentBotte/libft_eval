/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:46:24 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:46:24 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "almost every programmer should know memset!";
    ft_memset(str, '-', 6);
    printf("User:\n%s\n", str);
    printf("Expected:\n------ every programmer should know memset!");
    return 0;
}