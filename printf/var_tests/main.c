/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:56:09 by gupiment          #+#    #+#             */
/*   Updated: 2023/11/07 16:56:11 by gupiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int test_int(int num_args, ...);

int main(void)
{
    test_int(3, 8, 5, 4);

    return 0;
}

int test_int(int num_args, ...)
{
    va_list args;
    int i;
    int x;
    va_start(args, num_args);

    i = 0;
    while (i < num_args)
    {
        x = va_arg(args, int);
        printf("x: %d\n", x);
        i++;
    }
    va_end(args);
    return 0;
}
