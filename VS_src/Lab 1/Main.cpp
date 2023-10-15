#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

extern unsigned short height;
extern double salary;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);	//параметр ссылка
void ReadPersonSalary(double* salary);			//параметр указатель
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
void WritePersonData(const string& name, const string& height, const string& weight, unsigned short* age);

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	//setlocale(LC_ALL, "");
	unsigned short weight_var;
	unsigned short& weight = weight_var;
	unsigned short age = ReadPersonAge();
	string name = ReadPersonName();
	ReadPersonHeight();					//defines global variable height
	ReadPersonWeight(weight);
	ReadPersonSalary(&salary);
	WritePersonData(name, to_string(height), to_string(weight), &age);
	ReadPersonData(name, age, salary);
	WritePersonData(name, to_string(height), to_string(weight), &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, to_string(height), to_string(weight), &age);
}