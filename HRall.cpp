#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

unsigned long long pierwszy_podzielnik(string liczba, int powtorzen)
{
	int wynik = 0;
	int bufor = 0;
	for (unsigned long long int i = 0; i < liczba.length(); i++)
	{
		bufor = (char)liczba[i] - 48;
		wynik +=bufor;
	}


	return wynik*powtorzen;
}
int super_podzielnik(unsigned long long liczba)
{

}

int main()
{
	int powtorzen;
	string liczba;
	cin >> liczba >> powtorzen;
	unsigned long long suma_do_przeliczen;
	suma_do_przeliczen = pierwszy_podzielnik(liczba, powtorzen);
	cout << super_podzielnik(suma_do_przeliczen);

	return 0;
}
/*string liczba_na_string(string str, int _powtorzen)
{

	long long int buffor_pierwszej_dlugosci = str.length();
	str.resize(str.length() * _powtorzen);
	for (long long int j = 0; j < str.length()-buffor_pierwszej_dlugosci; j+=buffor_pierwszej_dlugosci)
	{
		for (long long int i = 0; i < buffor_pierwszej_dlugosci; i++)
		{
			str[i+buffor_pierwszej_dlugosci+j] = str[i+j];
		}
	}
	return str;
}*/