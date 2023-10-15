//import student.bks2102.Lab2.Variant15.Task1;
import test1;
#include <iostream>

int main() {
    int n;
    double epsilon;
    std::cout << "Input precision E: ";
    std::cin >> epsilon;
    std::cout << "Input value n: ";
    std::cin >> n;

    std::cout << "f1(" << n << ") = " << f1(n) << std::endl;
    std::cout << "f2(" << n << ") = " << f2(n) << std::endl;
    std::cout << "f3(" << n << ") = " << f3(n) << std::endl;
    std::cout << "f4(" << epsilon << ") = " << f4(epsilon) << std::endl;

    return 0;
}
