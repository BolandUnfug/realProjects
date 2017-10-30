#include<iostream>
#include<ctime>
using namespace std;
void chocolate();
char quit;
char chocchoice;
int reeses;
int m;
int kitkat;
int hersheys;
int main() {
	cout << "you can quit by typing q." << endl;
	srand((int)time(0));
	while (quit != 'q') {
		cout << "do you want some chocolate?" << endl;
		cin >> quit;
		chocolate();
		if (reeses > m && reeses > kitkat && reeses > hersheys) {
			cout << "your favorite chocolate is reeses! good choice." << endl;
		}
		if (m > reeses && m > kitkat && m > hersheys) {
			cout << "your favorite chocolate is m&m's! good choice." << endl;
		}
		if (kitkat > reeses && kitkat > m && kitkat > hersheys) {
			cout << "your favorite chocolate is kitkats! good choice." << endl;
		}
		if (hersheys > reeses && hersheys > kitkat && hersheys > m) {
			cout << "your favorite chocolate is hersheys! good choice." << endl;
		} 
	}
}
void chocolate() {
	int chocbar = rand() % 8 + 1;
	if (chocbar >= 1 && chocbar <= 2) {
		cout << "you should eat a reeses cup. yum peanut butter!" << endl;
		cout << "do you like reeses?" << endl;
		cin >> chocchoice;
		if (chocchoice == 'y' || chocchoice == 'Y') {
			reeses++;
		}
	}
	if (chocbar >= 3 && chocbar <= 3) {
		cout << "you should eat a hersheys bar. mmm, dark chocolate. " << endl;
		cout << "do you like hersheys?" << endl;
		cin >> chocchoice;
		if (chocchoice == 'y' || chocchoice == 'Y') {
			hersheys++;
		}
	}
	if (chocbar >= 4 && chocbar <= 5) {
		cout << "you should eat a kitkat. have a break!" << endl;
		cout << "do you like kitkat?" << endl;
		cin >> chocchoice;
		if (chocchoice == 'y' || chocchoice == 'Y') {
			kitkat++;
		}
	}
	if (chocbar >= 6 && chocbar <= 8) {
		cout << "you should have some M&M's! yay!" << endl;
		cout << "do you like M&M's?" << endl;
		cin >> chocchoice;
		if (chocchoice == 'y' || chocchoice == 'Y') {
			m++;
		}
	}
}