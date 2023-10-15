#include <iostream>
#include <string>
using namespace std;

double salary;

void WritePersonData(const string& name, const string& height, const string& weight, unsigned short* age)
{
	cout << name << '\n';
	cout << height << " см" << '\n';
	cout << weight << " кг" << '\n';
	cout << *age << " лет" << '\n';
	cout << salary << " руб 00 коп" << '\n';
}