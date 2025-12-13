/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:47:54 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/13 15:01:27 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

char my_toupper(char ch) {
    return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

int main(int argc, char **argv) {
	(void)argv;
	
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    } else {
        for (int i = 1; i < argc; i++)
            for (int j = 0; argv[i][j]; j++)
                std::cout << my_toupper(argv[i][j]);
        std::cout << "\n";
    }
    std::cout.flush();
    return (EXIT_SUCCESS);
}
