#include "rand_value.h"
#include "check_value.h"
#include "high_scores.h"

#include <iostream>
#include <string>
#include <fstream>

int main() {

	const int max_value = 100;
    const std::string high_scores_filename = "high_scores.txt";
	
    std::string username;
    int guess, attempt_count = 1, value = rand_value(max_value);

    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::cin >> username;

    std::cout << "Enter your guess:" << std::endl;
    std::cin >> guess;

    check_value(guess, value, attempt_count);

    set_scores(high_scores_filename, username, attempt_count);

    get_scores(high_scores_filename);

	return 0;
}
