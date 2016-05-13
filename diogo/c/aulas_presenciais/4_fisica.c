#include <stdio.h>
#include <math.h>

double acMedia(double d, double t);
double funcHorariaVel(double v0, double a, double t);
double funcHorariaPos(double s0, double v0, double t, double a);
double torricelli(double v0, double a, double d);

int main() {
    int w, x, y, z;
    w = 4;
    x = 9;
    y = 2;
    z = 5;
    printf("%.2f\n", acMedia(z, y));
    printf("%.2f\n", funcHorariaVel(y, w, z));
    printf("%.2f\n", funcHorariaPos(w, x, z, y));
    printf("%.2f\n", torricelli(z, y, x));

    return 0;
}

double acMedia(double d, double t) {
    return d / t;
}

double funcHorariaVel(double v0, double a, double t) {
    return v0 + (a * t);
}

double funcHorariaPos(double s0, double v0, double t, double a) {
    return s0 + v0 * t + ((a * t * t) / 2);
}

double torricelli(double v0, double a, double d) {
    return sqrt(v0 * v0 + (2 * a * d));
}
