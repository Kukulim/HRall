#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int main() {

	map<string, int> mapeczka;
	std::map<string, int>::iterator it;
	string name;
	int ocena,znacznikX,kolejki;
	cin >> kolejki;
	for (int i = 0; i < kolejki; i++)
	{
		cin >> znacznikX;
		switch (znacznikX)
		{
		case 1:
			cin >> name >> ocena;
			mapeczka[name] += ocena;
			break;
		case 2:
			cin >> name;
			it = mapeczka.find(name);
			if (it != mapeczka.end())
				mapeczka.erase(it);
			break;
		case 3:
			cin >> name;
			it = mapeczka.find(name);
			if (it != mapeczka.end())
				cout << it->second << endl;
			else
				cout << "0" << endl;
			break;
		}
	}
	return 0;
}

