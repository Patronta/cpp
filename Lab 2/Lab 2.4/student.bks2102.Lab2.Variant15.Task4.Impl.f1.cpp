#include <cmath>
module student.bks2102.Lab2.Variant15.Task4;

namespace RBPO::Lab2::Variant15::Task4 {
    double f1(double x) {
        return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
    }
}