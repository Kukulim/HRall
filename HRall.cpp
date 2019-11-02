#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:

	void display()
	{
		cout << wysokosc << " " << szerokosc;
	}
protected:
	int wysokosc;
	int szerokosc;

};
class RectangleArea :public Rectangle
{
public:

	void read_input()
	{
		cin >> wysokosc >> szerokosc;
	}
	void display() const
	{
		cout << wysokosc * szerokosc;
	}
private:
	

};

int main()
{
	/*
	 * Declare a RectangleArea object
	 */
	RectangleArea r_area;

	/*
	 * Read the width and height
	 */
	r_area.read_input();

	/*
	 * Print the width and height
	 */
	r_area.Rectangle::display();

	/*
	 * Print the area
	 */
	r_area.display();

	return 0;
}