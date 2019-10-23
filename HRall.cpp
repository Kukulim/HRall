#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";
	int cala;
	double liczba;
	string napis;
	cin >> cala >> liczba;
	getline(cin, napis);
	cout << i + cala << endl;
	cout.precision(1);
	cout << fixed << d + liczba << endl;
	cout << s + napis << endl;
	// Print the sum of both integer variables on a new line.

	// Print the sum of the double variables on a new line.

	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.

	return 0;
}
