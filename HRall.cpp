#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sutdent_id = 0;
int professon_id = 0;
class Person
{
public:
	virtual void putdata() = 0;
	virtual void getdata() = 0;
private:
};
class Professor :public Person
{
public:
	Professor();
	~Professor();
	virtual void getdata()
	{
		cin >> name >> age >> publikations;
	}
	virtual void putdata()
	{
		cout << name << " " << age << " " << publikations << " " << id<<endl;
	}
private:
	string name;
	int age;
	int publikations;
	int id;
};

Professor::Professor()
{
	id=++professon_id;
}

Professor::~Professor()
{
}
class Student :public Person
{
public:
	Student();
	~Student();
	virtual void getdata()
	{
		cin >> name >> age;
		for (int i = 0; i < 6; i++)
		{
			cin >> marks[i];
		}
	}
	virtual void putdata()
	{
		cout << name << " " << age << " " << oblicz_sume_marks() << " " << id<<endl;
	}
	int oblicz_sume_marks()
	{
		int suma = 0;
		for (int i = 0; i < 6; i++)
		{
			suma+= marks[i];
		}
		return suma;

	}
private:
	string name;
	int age;
	int marks[6];
	int id;
};

Student::Student()
{
	id = ++sutdent_id;
}

Student::~Student()
{
}

int main() {

	int n, val;
	cin >> n;//The number of objects that is going to be created.
	const int g = 4;
	Person* per[g];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i < n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}
