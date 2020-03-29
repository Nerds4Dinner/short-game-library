#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int mainMenu(){
	int choice;
	cout << "What would you like to do?\n\n";
	cout << "1) Explore!\n";
	cout << "2) Craft\n";
	cout << "3) Status\n";
	cout << "4) Leave Cave\n";
	cin >> choice;
	return choice;
}
void explore(int situation){
	cout << situation;
}

int main(){
	srand(static_cast <unsigned int>(time(0)));
	cout << "=============\n";
	cout << "Cave Explorer\n";
	cout << "=============\n\n";
	cout << "How far can you go?\n\n";
	
	int health = 3;
	int choice = 0;
	int firstAid = 0;
	int tools = 0;
	double money = 0.0;
	bool gameOver = false;
	int situation;

	while (gameOver == false){
		mainMenu();
		if (choice == 1){
		explore (rand()%5);	
		}
	}
}	
