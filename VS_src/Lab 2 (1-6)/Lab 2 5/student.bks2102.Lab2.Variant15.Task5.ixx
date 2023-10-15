#include <cmath>
export module student.bks2102.Lab2.Variant15.Task5;

namespace RBPO::Lab2::Variant15::Task5 {
	export double f1(double);
	export double f2(double);
	export double f3(int);
	export double f4(double);
	export double a(int);
}

module :private;
namespace RBPO::Lab2::Variant15::Task5 {
    double f1(double x) {
        return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
    }

    double f2(double x) {
        if (x <= 4) {
            return sqrt(x * x + 4);
        }
        else {
            return cos(fabs(2 + x));
        }
    }

    double a(int n) {
        return pow(-1, n) * (n + 1) / (n * n + 2 * n + 1);
    }

    double f3(int n) {
        double sum = 0.0;
        if (n < 0) {
            return sum;
        }
        do {
            sum += a(n);
            n--;
        } while (n >= 0);
        return sum;
    }

    double f4(double epsilon) {
        double sum = 0.0;
        int i = 1;
        if (fabs(a(i) - a(i - 1)) <= epsilon) {
            return sum;
        }
        do {
            sum += a(i - 1);
            i++;
        } while (fabs(a(i) - a(i - 1)) > epsilon);
        return sum;
    }
}