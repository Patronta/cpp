#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

static double salary;
static unsigned short height;

static unsigned short ReadPersonAge()
{
	unsigned short age;
	cout << "Введите возраст: ";
	cin >> age;
	return age;
}

static string ReadPersonName()
{
	string name;
	cout << "Введите ФИО: ";
	cin >> name;
	return name;
}


static void ReadPersonHeight()
{
	cout << "Введите рост: ";
	cin >> height;
}

static void ReadPersonWeight(unsigned short& weight)	//параметр ссылка
{
	cout << "Введите вес: ";
	cin >> weight;
}

static void ReadPersonSalary(double* salary)			//параметр указатель
{
	cout << "Введите зарплату: ";
	cin >> *salary;
}

static void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

static void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();					//defines global variable height
	ReadPersonWeight(weight);
}

static void WritePersonData(const string& name, const string& height, const string& weight, unsigned short* age)
{
	cout << name << '\n';
	cout << height << " см" << '\n';
	cout << weight << " кг" << '\n';
	cout << *age << " лет" << '\n';
	cout << salary << " руб 00 коп" << '\n';
}

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	//setlocale(LC_ALL, "");
	unsigned short weight_var;
	unsigned short &weight =  weight_var;
	unsigned short age = ReadPersonAge();
	string name = ReadPersonName();
	ReadPersonHeight();					//defines global variable height
	ReadPersonWeight(weight);
	ReadPersonSalary(&salary);
	WritePersonData (name, to_string(height), to_string(weight), &age);
	ReadPersonData(name, age, salary);
	WritePersonData (name, to_string(height), to_string(weight), &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData (name, to_string(height), to_string(weight), &age);
}