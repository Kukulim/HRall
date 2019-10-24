#include <iostream>
using namespace std;

int pageCount(int ilosc_stron, int szukana) {
	int totalfront = ilosc_stron/2;
	int targetfront = szukana/2;
	int targetback = totalfront - targetfront;
	
	
	if (targetfront < targetback)
		return targetfront;
	return targetback;
}

int main()
{
	int ilosc_stron,szukana;
	cin >> ilosc_stron >> szukana;
	cout << pageCount(ilosc_stron, szukana);
	return 0;
}
