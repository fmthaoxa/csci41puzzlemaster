#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "puzzle.h"
#include <cmath>
using namespace std;

class Node {
  public:
	int data;
	Node *left = nullptr;
	Node *right = nullptr;
};
Node* GetNewNode(int data) {//creates a new node
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
Node* Insert(Node* root, int data) { //inserts into tree
	if (root == NULL) {
		root = GetNewNode(data);
	} else if (data <= root->data) {
		root->left = Insert(root->left, data);
	} else {
		root->right = Insert(root->right, data);
	}
	return root;
}
bool puzzle1() {//binary tree kinda like dungeon delve
	string s;
	Node* temp;
	Node* root = nullptr;
	bool b = true;
	cout << "Find your way down the path be careful not to fall into the traps!\n";
	cout << "MAP: 999 501 1501 300 600 1201 5000 200 400 540 580 1001 1300 4000 6000\n";
	root = Insert(root, 999);
	root = Insert(root, 501);
	root = Insert(root, 1501);
	root = Insert(root, 300);
	root = Insert(root, 600);
	root = Insert(root, 1201);
	root = Insert(root, 5000);
	root = Insert(root, 200);
	root = Insert(root, 400);
	root = Insert(root, 550);
	root = Insert(root, 580);
	root = Insert(root, 1001);
	root = Insert(root, 1300);
	root = Insert(root, 4000);
	root = Insert(root, 6000);
	temp = root;
	while (temp->data) {
		if (temp->data == 1001) {
			cout << "You find a door marked 1001 it appears to be a way out!\n";
			return true;
		} else if (temp->data % 10 == 0) {
			cout << "You have reached " << temp->data << " it is a dead end try this puzzle again!\n";
			return false;
		}
		cout << "Choose to go either left or right you are at " << temp->data << endl;
		cin >> s;
		if (s == "left") {
			temp = temp->left;
		} else if (s == "right") {
			temp = temp->right;
		} else return false;
	}
}
bool puzzle2() {//Has to choose the right order for the stones
	vector <int> vec;
	int choice;
	cout << "You see 5 stones aranged in a circle that looks like they can be pushed in.\n";
	while (true) {
		cout << "Select which stone you want to press.\n";
		cin >> choice;
		vec.push_back(choice);
		if (vec.size() >= 5) {
			if (vec.at(0) == 3 && vec.at(1) == 1 && vec.at(2) == 5 && vec.at(3) == 2 && vec.at(4) == 4) {
				cout << "You have pressed the last stone, a magic portal opens you step through to continue your journey.\n";
				return true;
			} else {
				cout << "You have pressed the last stone.\nNothing has happened now what?\n";
				return false;
			}
		}

	}
}
void printboard(int counter, string zero, string a, string b, string c, string d) {
	cout << "Tries remaining " << 4 - counter << endl << zero << a << b << c << d;
}
bool puzzle3() {//user has to match the numbers
	char choice;
	char choice2;
	int i;
	int j;
	int counter = 0;
	bool bb = true;
	vector <char> A{'8', '1', '3', '4'};
	vector <char> B{'6', '5', '5', '6'};
	vector <char> C{'1', '3', '2', '7'};
	vector <char> D{'7', '2', '8', '4'};
	string temp;
	string temp2;
	string zero = "-  1 2 3 4\n";
	string a = "A: _ _ _ _\n";
	string b = "B: _ _ _ _\n";
	string c = "C: _ _ _ _\n";
	string d = "D: _ _ _ _\n";
	cout << "match all of the tiles, but be careful you only have 4 misses!\n";
	while (true) {
		printboard(counter, zero, a, b, c, d);
		cout << "choose a row: A,B,C,D\n";
		cin >> choice;
		if (!cin) return false;
		choice = toupper(choice);
		cout << "Choose a column: 1,2,3,4\n";
		cin >> i;
		if (!cin) return false;
		cout << "choose another row\n";
		cin >> choice2;
		choice2 = toupper(choice2);
		if (!cin) return false;
		cout << "choose another column\n";
		cin >> j;
		if (!cin)return false;
		if (choice == 'A') {
			temp = a;
			temp.at(((i - 1) * 2) + 3) = A.at(i - 1);
		}
		if (choice == 'B') {
			temp = b;
			temp.at(((i - 1) * 2) + 3) = B.at(i - 1);
		}
		if (choice == 'C') {
			temp = c;
			temp.at(((i - 1) * 2) + 3) = C.at(i - 1);
		}
		if (choice == 'D') {
			temp = d;
			temp.at(((i - 1) * 2) + 3) = D.at(i - 1);
		}
		if (choice == choice2 && i == j) {
			cout << "invalid chose the same for both\n";
			return false;
		}
		if (choice2 == 'A') {
			temp2 = a;
			temp2.at(((j - 1) * 2) + 3) = A.at(j - 1);
			cout << temp2 << temp;
		}
		if (choice2 == 'B') {
			temp2 = b;
			temp2.at(((j - 1) * 2) + 3) = B.at(j - 1);
		}
		if (choice2 == 'C') {
			temp2 = c;
			temp2.at(((j - 1) * 2) + 3) = C.at(j - 1);
		}
		if (choice2 == 'D') {
			temp2 = d;
			temp2.at(((j - 1) * 2) + 3) = D.at(j - 1);
		}
		if (choice == choice2) {
			char fuck = temp2.at(((j - 1) * 2) + 3);
			temp.at(((j - 1) * 2) + 3) = fuck;
			if (temp.at(((i - 1) * 2) + 3) == temp2.at(((j - 1) * 2) + 3)) {
				if (choice == 'A') a = temp;
				else if (choice == 'B')b = temp;
				else if (choice == 'C')c = temp;
				else d = temp;
			}
			if (choice == 'A') printboard(counter, zero, temp, b, c, d);
			else if (choice == 'B')printboard(counter, zero, a, temp, c, d);
			else if (choice == 'C')printboard(counter, zero, a, b, temp, d);
			else printboard(counter, zero, a, b, c, temp);
		}

		else if (temp.at(((i - 1) * 2) + 3) == temp2.at(((j - 1) * 2) + 3)) {
			cout << "ELSE IF STATEMENT\n";
			cout << "Tries remaining " << 4 - counter << endl << zero;
			if (choice == 'A') {
				cout << temp;
				a = temp;
			} else if (choice2 == 'A') {
				cout << temp2;
				a = temp2;
			} else cout << a;
			if (choice == 'B') {
				cout << temp;
				b = temp;
			} else if (choice2 == 'B') {
				cout << temp2;
				b = temp2;
			} else cout << b;
			if (choice == 'C') {
				cout << temp;
				c = temp;
			} else if (choice2 == 'C') {
				cout << temp2;
				c = temp2;
			} else cout << c;
			if (choice == 'D') {
				cout << temp;
				d = temp;
			} else if (choice2 == 'D') {
				cout << temp2;
				d = temp2;
			} else cout << d;
		} else {
			cout << "ELSE STATEMENT\n";
			cout << "Tries remaining " << 4 - counter << endl << zero;
			if (choice == 'A') {
				cout << temp;
			} else if (choice2 == 'A') {
				cout << temp2;
			} else cout << a;
			if (choice == 'B') {
				cout << temp;
			} else if (choice2 == 'B') {
				cout << temp2;
			} else cout << b;
			if (choice == 'C') {
				cout << temp;
			} else if (choice2 == 'C') {
				cout << temp2;
			} else cout << c;
			if (choice == 'D') {
				cout << temp;
			} else if (choice2 == 'D') {
				cout << temp2;
			} else cout << d;
		}

		if (a == "A: 8 1 3 4\n" && b == "B: 6 5 5 6\n" && c == "C: 1 3 2 7\n" && d == "D: 7 2 8 4\n") return true;
		if (counter >= 4)return false;
		cout << "Ready to go choose again?\n";
		cin >> temp;
		if (a == temp || a == temp2 || b == temp || b == temp2 || c == temp || c == temp2 || d == temp || d == temp2) bb = false;
		if (bb == true) counter++;
		bb = true;
	}
}
bool puzzle4() { //standard heap user inputs numbers and has to guess the highest.
	priority_queue<int> vec;
	int x = 0;
	cout << "Insert numbers until you type 0. Then guess which number will be first!\n";
	while (true) {
		cin >> x;
		if (x == 0)break;
		vec.push(x);
	}
	if (vec.size() < 1) {
		cout << "No elements entered fail\n";
		return false;
	} else {
		cout << "Guess which number will be first!\n";
		cin >> x;
		if (x == vec.top()) {
			cout << "Correct answer, you win!\n";
			return true;
		} else {
			cout << "Incorrect answer, try another time!\n";
			return false;
		}
	}

}
struct food {
	int points;
	int number_left;
	string id;
	food(int point, int number, string name) {
		points = point;
		number_left = number;
		id = name;
	}

};
void popfood(vector <food> &vec) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec.at(i).number_left == 0) {
			vec.at(i) = vec.back();
			vec.pop_back();
		}
	}
}
bool puzzle5() {
	srand(time(NULL));
	int score = 0;
	int x;
	food Grape(1, 10, "grape");
	food Apple(3, 6, "apple");
	food Banana(4, 4, "banana");
	food Dragonfruit(10, 1, "dragonfruit");
	food Durian(0, 3, "durian");
	food Raspberry(2, 8, "rapberry");
	food Cantelope(3, 5, "cantelope");
	food Pineapple(7, 2, "pineapple");
	food Watermelon(15, 1, "watermelon");
	food Orange(3, 7, "orange");
	vector <food>vec{Grape, Apple, Banana, Dragonfruit, Durian, Raspberry, Cantelope, Pineapple, Watermelon, Orange};
	cout << "Gather food every round and score enough points to win!\n";
	while (true) {
		popfood(vec);
		int temp;
		int temp2 = vec.size();
		if (vec.size() < 3) break;
		temp = rand() % temp2;
		food food1 = vec.at(temp);
		temp = rand() % temp2;
		food food2 = vec.at(temp);
		while (food1.id == food2.id) {
			temp = rand() % temp2;
			food2 = vec.at(temp);
		}
		temp = rand() % temp2;
		food food3 = vec.at(temp);
		while (food3.id == food1.id || food3.id == food2.id) {
			temp = rand() % temp2;
			food3 = vec.at(temp);
		}
		cout << "Which fruit do you want to pick?\n" << "1.) " << food1.id << ", 2.) " << food2.id << ", 3.) " << food3.id << endl;
		cin >> x;
		if (x == 1) {
			for (int i = 0; i < vec.size(); i++) {
				if (food1.id == vec.at(i).id) {
					score += vec.at(i).points;
					vec.at(i).number_left -= 1;
				}
			}
		} else if (x == 2) {
			for (int i = 0; i < vec.size(); i++) {
				if (food2.id == vec.at(i).id) {
					score += vec.at(i).points;
					vec.at(i).number_left -= 1;
				}
			}
		} else if (x == 3) {
			for (int i = 0; i < vec.size(); i++) {
				if (food3.id == vec.at(i).id) {
					score += vec.at(i).points;
					vec.at(i).number_left -= 1;
				}
			}
		} else return false;

	}
	if (score > 150) {
		cout << "You have scored " << score << " which is enough points to win!\n";
		return true;
	} else return false;


}
