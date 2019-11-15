#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;



	int main() {
		int iCount;
		map<string, int> maps;
		std::map<string, int>::iterator it;
		cin >> iCount;
		for (int i = 0; i < iCount; ++i) {
			string name;
			int type,ocena;
			cin >> type >> name>>ocena;
			switch (type) {
			case 1:
				maps.insert(make_pair(name, ocena));
				break;
			case 2:
				it = maps.find(name);
				maps.erase(it);
				break;
			case 3:
				it = maps.find(name);
				cout << it->first << it->second;
				break;
			}
		}
		return 0;
	}

