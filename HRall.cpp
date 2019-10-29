#include<iostream>

using namespace std;
class Box
{
public:
	Box(int=0, int=0, int=0);
	Box(const Box &BBox);
	~Box();
	int getLength()
	{
		return dlugosc;
	}
	int getBreadth()
	{
		return glebokosc;
	}
	int getHeight()
	{
		return wysokosc;
	}
	long long CalculateVolume()
	{
		long long suma = 0;
		suma = (long long)dlugosc * (long long)glebokosc * (long long)wysokosc;
		
		return suma;
	}
	friend ostream& operator<<(ostream& out, const Box& B);
	bool operator<(Box& B)
	{
		if ((this->dlugosc < B.dlugosc) || ((this->wysokosc < B.wysokosc) && (this->dlugosc == B.dlugosc)) || ((this->wysokosc < B.wysokosc) && (this->dlugosc == B.dlugosc) && (this->wysokosc == B.wysokosc)))
			return true;
		else
			return false;
	}

private:
	int dlugosc;
	int glebokosc;
	int wysokosc;
};
ostream& operator<<(ostream& out, const Box& B)
{
	return out << B.dlugosc << " " << B.glebokosc << " " << B.wysokosc;
}



Box::Box(int a,int b, int c)
{
	dlugosc = a;
	glebokosc = b;
	wysokosc = c;
}
Box::Box(const Box &BBox)
{
	dlugosc = BBox.dlugosc;
	glebokosc = BBox.glebokosc;
	wysokosc = BBox.wysokosc;
}

Box::~Box()
{
}

void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
	check2();
}