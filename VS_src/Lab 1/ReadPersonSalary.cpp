#include <iostream>
using namespace std;

void ReadPersonSalary(double* salary)			//параметр указатель
{
	cout << "¬ведите зарплату: ";
	cin >> *salary;
}