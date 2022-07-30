#pragma once

#include <iostream>

void get_scores(std::string high_scores_filename);
void set_scores(std::string high_scores_filename, std::string username, int attempt_count);
