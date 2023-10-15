#include <iostream>
using namespace std;
import student.bks2102.Lab2.Variant15.Task5;

int main() {
    int n;
    double epsilon;
    cout << "Input precision E: ";
    cin >> epsilon;
    cout << "Input value n: ";
    cin >> n;

    cout << "f1(" << n << ") = " << RBPO::Lab2::Variant15::Task5::f1(n) << endl;
    cout << "f2(" << n << ") = " << RBPO::Lab2::Variant15::Task5::f2(n) << endl;
    cout << "f3(" << n << ") = " << RBPO::Lab2::Variant15::Task5::f3(n) << endl;
    cout << "f4(" << epsilon << ") = " << RBPO::Lab2::Variant15::Task5::f4(epsilon) << endl;

    return 0;
}
