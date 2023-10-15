#include <cmath>
module student.bks2102.Lab2.Variant15.Task3;

namespace RBPO::Lab2::Variant15::Task3 {
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