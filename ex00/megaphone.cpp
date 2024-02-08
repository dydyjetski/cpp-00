/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:08:12 by dmeurant          #+#    #+#             */
/*   Updated: 2023/11/27 09:08:13 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
    int i;
    int end;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        j = 0;
        while(av[++j])
        {
            i = 0;
            end = 0;
            while(av[j][i] && av[j][i] == ' ')
                i++;
            if (av[j][i] == '\0')
            {
                i = 0;
                while(av[j][i])
                    std::cout << av[j][i++];
            }
            while(av[j][end] && av[j][end] != '\0')
            {
                end++;
            }
            end--;
            while(end > 0 && av[j][end] == ' ' )
            {
                end--;
            }
            // std::cout << "START:" << i;
            while (i <= end)
                std::cout << (char)toupper(av[j][i++]);      
            if (av[j + 1])
                std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}