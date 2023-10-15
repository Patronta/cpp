#include <cmath>
module student.bks2102.Lab2.Variant15.Task3; 

namespace RBPO::Lab2::Variant15::Task3 {
    double f2(double x) {
        if (x <= 4) {
            return sqrt(x * x + 4);
        }
        else {
            return cos(fabs(2 + x));
        }
    }
}