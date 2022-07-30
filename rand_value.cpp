#include "rand_value.h"

#include <cstdlib>
#include <ctime>

int rand_value(int max_value) {

    std::srand((unsigned)std::time(nullptr));
	
    return std::rand() % max_value;
}
