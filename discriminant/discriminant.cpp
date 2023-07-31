// Your First C++ Program

#include <iostream>
#include <cmath>

void discr (double koef_A, double koef_B, double koef_C) {
    double discriminant = (koef_B * koef_B) - (4 * koef_A * koef_C);
    if (discriminant < 0) {
        printf("нету корней\n");
    } else if (discriminant == 0) {
        printf("есть 1 корень x =%s", koef_B / 2 * koef_A);

    } else if (discriminant > 0) {
        printf("есть 2 корня x1=%f x2 =%f", (-koef_B + sqrt(discriminant)) / (2 * koef_A), (-koef_B - sqrt(discriminant)) / (2 * koef_A));
    }
}


int main() {
    discr(1, -4, -5);
    return 0;
}


