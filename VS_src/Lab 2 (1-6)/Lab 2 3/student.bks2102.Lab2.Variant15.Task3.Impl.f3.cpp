module student.bks2102.Lab2.Variant15.Task3;

namespace RBPO::Lab2::Variant15::Task3 {
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
}