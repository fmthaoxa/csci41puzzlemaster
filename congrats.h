#include <unistd.h>
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


void congrats() {

	string s = "Congratulations!";



	for(unsigned int i = 0; i < s.length(); i++) {
		cout << s.at(i);
		cout.flush();
		usleep(80000);
	}

	cout << endl << endl;
}

void pen_congrats() {

	string s = "Rararararaaa!";



	for(unsigned int i = 0; i < s.length(); i++) {
		cout << s.at(i);
		cout.flush();
		usleep(80000);
	}

	cout << endl << endl;
}

void clap() {
	int clap = 0;
	while(clap < 15) {
		cout << setw(40) <<"clap!*" << " ";
		cout.flush();
		usleep(75000);
		clap++;
	} 
	cout << endl << endl;

}

void final_congrats(int x) {
	for(int i = 0; i < x; i++) {
		congrats();
		clap();
	}
}


void final_congratulations() {
	final_congrats(8);
	pen_congrats();
	clap();
	final_congrats(7);
}

