#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int lini_kodu,prob;
	cin >> lini_kodu,prob;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string* tabela = new string[lini_kodu];
	for (int i = 0; i <lini_kodu; i++)
	{
		getline(cin, tabela[i]);
	}




	return 0;
}
