/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopezb <alopezb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:31:28 by alopezb           #+#    #+#             */
/*   Updated: 2022/02/02 18:43:39 by alopezb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void checkstrings(const char *str1, const char *str2)
{
    int i;
    int j;
    int h;

    i = 0;
    while (str1[i])
    {
        j = 0;
        while (j < i)
        {
            if (str1[j] == str1[i])
                i++;
            j++;
        }
        h = 0;
        while (str2[h])
        {
            if (str1[i] == str2[h])
            {
                write(1, &str1[i], 1);
                break;
            }
        h++;
        }
        i++;
    }

}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n",1);
        return (0);
    }
    checkstrings(argv[1], argv[2]);

    return (0);
}