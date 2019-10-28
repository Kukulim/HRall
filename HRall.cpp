#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string pierwszy_podzielnik(string liczba, int powtorzen)
{
	unsigned long long int wynik = 0;
	for (unsigned long long int i = 0; i < liczba.length(); i++)
	{
		wynik += (char)liczba[i] - 48;
	}
	wynik = wynik*powtorzen;
	string zwrot = to_string(wynik);
	return zwrot;
}
string super_podzielnik(string liczba)
{
	unsigned long long int wynik = 0;
	if (liczba.size() == 1) return liczba;
	else 
	for (unsigned long long int i = 0; i < liczba.length(); i++)
		{
			wynik += (char)liczba[i] - 48;
		}
	liczba = to_string(wynik);	
	return super_podzielnik(liczba);
}

int main()
{
	int powtorzen;
	string liczba;
	cin >> liczba >> powtorzen;
	string suma_do_przeliczen;
	suma_do_przeliczen = pierwszy_podzielnik(liczba, powtorzen);
	cout << super_podzielnik(suma_do_przeliczen);

	return 0;
}