#include "high_scores.h"

#include <iostream>
#include <fstream>

void get_scores(std::string high_scores_filename) {

    std::ifstream in_file{high_scores_filename};
    if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
		exit(-1);
	}

    std::cout << "High scores table:" << std::endl;

	std::string user_name;
	int high_score = 0;

	while (true) {
		in_file >> user_name >> high_score;
		in_file.ignore();
		if (in_file.fail()) {
			break;
		}

		std::cout << user_name << "\t" << high_score << std::endl;
	}
}

void set_scores(std::string high_scores_filename, std::string username, int attempt_count) {

    std::ofstream out_file{high_scores_filename, std::ios_base::app};
	if (!out_file.is_open()) {
		std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
		exit(-1);
	}

	out_file << username << " " << attempt_count << std::endl;
}
