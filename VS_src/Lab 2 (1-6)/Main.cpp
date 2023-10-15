#include <iostream>
using namespace std;
import student.bks2102.Lab2.Variant15.Task1;
import student.bks2102.Lab2.Variant15.Task2;
import student.bks2102.Lab2.Variant15.Task3;
import student.bks2102.Lab2.Variant15.Task4;
import student.bks2102.Lab2.Variant15.Task5;

#define TASK(x, n, epsilon) {\
    cout << "Task " <<  ##x## << endl;\
    cout << "f1(" << n << ") = " << RBPO::Lab2::Variant15::Task##x##::f1(n) << endl;\
    cout << "f2(" << n << ") = " << RBPO::Lab2::Variant15::Task##x##::f2(n) << endl;\
    cout << "f3(" << n << ") = " << RBPO::Lab2::Variant15::Task##x##::f3(n) << endl;\
    cout << "f4(" << epsilon << ") = " << RBPO::Lab2::Variant15::Task##x##::f4(epsilon) << endl;\
    cout << "-------------------------------------------" << endl;\
}

int main() {
    int n;
    double epsilon;
    cout << "Input precision E: ";
    cin >> epsilon;
    cout << "Input value n: ";
    cin >> n;
    cout << endl;
    TASK(1, n, epsilon)
    TASK(2, n, epsilon)
    TASK(3, n, epsilon)
    TASK(4, n, epsilon)
    TASK(5, n, epsilon)
    return 0;
}
