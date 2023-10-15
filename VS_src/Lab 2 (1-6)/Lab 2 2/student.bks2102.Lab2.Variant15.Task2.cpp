#include <cmath>
module student.bks2102.Lab2.Variant15.Task2;

namespace RBPO::Lab2::Variant15::Task2 {
    double f1(double x) {
        return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
    }

    double f2(double x) {
        if (x <= 4) {
            return sqrt(x * x + 4);
        }
        else{
            return cos(fabs(2 + x));
        }
    }

    double a(int n) {
        return pow(-1, n) * (n + 1) / (n * n + 2 * n + 1);
    }

    double f3(int n) {
        double sum = 0.0;
        while (n >= 0) {
            sum += a(n);
            n--;
        }
        return sum;
    }

    double f4(double epsilon) {
        double sum = 0.0;
        int i = 1;

        while (fabs(a(i) - a(i - 1)) > epsilon) {
            sum += a(i - 1);
            i++;
        }
        return sum;
    }
}