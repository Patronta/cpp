#include <cmath>
module student.bks2102.Lab2.Variant15.Task3;

namespace RBPO::Lab2::Variant15::Task3 {
    double a(int n) {
        return pow(-1, n) * (n + 1) / (n * n + 2 * n + 1);
    }
}