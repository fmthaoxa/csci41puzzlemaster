#include <iostream>
#include <iomanip>
#include <time.h>
#include "score.h"

Score::Score() {
	score = 9999;
	starting_time=std::time(0);
}

void Score::print() {
	std::cout << "SCORE: " << score << std::endl;
}


void Score::start_time() {
	std::cout << starting_time << std::endl;
}

void Score::final_time() {
	int final_time = std::time(0)-starting_time;

	std::cout << "Your final score is: " << score - final_time << std::endl;
}

void Score::add(int points) {
	
	score = score + points;

	if(score < 0) {
		score = 0;
	}

}

