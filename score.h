#pragma once


class Score{
	private:
		int score;
		int starting_time;


	public:
		Score();

		void print();

		void start_time();
		
		void final_time();

		void add(int points);
};

