#include <iostream>
#include <string>
using namespace std;

double salary;

void WritePersonData(const string& name, const string& height, const string& weight, unsigned short* age)
{
	cout << name << '\n';
	cout << height << " ��" << '\n';
	cout << weight << " ��" << '\n';
	cout << *age << " ���" << '\n';
	cout << salary << " ��� 00 ���" << '\n';
}