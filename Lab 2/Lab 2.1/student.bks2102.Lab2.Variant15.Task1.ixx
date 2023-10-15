export module student.bks2102.Lab2.Variant15.Task1;
#include <cmath>

namespace RBPO::Lab2::Variant15::Task1 {
    export double f1(double x) {
        return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
    }

    export double f2(double x) {
        return (x <= 4) ? sqrt(x * x + 4) : cos(fabs(2 + x));
    }

    export double a(int n) {
        return pow(-1, n) * (n + 1) / (n * n + 2 * n + 1);
    }

    export double f3(int n) {
        double sum = 0.0;
        for (int i = 0; i <= n; i++) {
            sum += a(i);
        }
        return sum;
    }

    export double f4(double epsilon) {
        double sum = 0.0;
        int i = 1;

        while (fabs(a(i) - a(i - 1)) > epsilon) {
            sum += a(i - 1);
            i++;
        }
        return sum;
    }
}