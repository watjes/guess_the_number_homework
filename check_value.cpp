#include "check_value.h"

#include <iostream>

void check_value(int guess, int value, int& attempt_count) {
    
    while (guess != value) {
        if (guess > value)
            std::cout << "less than " << guess << std::endl;
        if (guess < value)
            std::cout << "greater than " << guess << std::endl;
        if (guess != value)
            std::cin >> guess;
        ++attempt_count;
    }

    std::cout << "you win! attempts = " << attempt_count << std::endl;
}
