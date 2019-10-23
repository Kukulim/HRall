#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include<vector>
using namespace std;

vector<int> matchingStrings(vector<string> proby, vector<string> dane) {
	
	vector <int> wyniki(dane.size());
	for (int j = 0; j < dane.size(); j++)
	{
		for (int i = 0; i < proby.size(); i++)
		{
			if (dane[j] == proby[i])
				wyniki[j]++;
		}
	}
	return wyniki;
}


int main() {
	int strings_count;
	cin >> strings_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<string> strings(strings_count);

	for (int i = 0; i < strings_count; i++) {
		string strings_item;
		getline(cin, strings_item);

		strings[i] = strings_item;
	}

	int queries_count;
	cin >> queries_count;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<string> queries(queries_count);

	for (int i = 0; i < queries_count; i++) {
		string queries_item;
		getline(cin, queries_item);

		queries[i] = queries_item;
	}

	vector<int> res = matchingStrings(strings, queries);

	for (int i = 0; i < res.size(); i++) {
		cout << res[i];

		if (i != res.size() - 1) {
			cout << "\n";
		}
	}


	return 0;
}
