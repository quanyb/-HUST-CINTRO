// IT1108_Bai1_2_Diện tích tam giác
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    if((a + b <= c) || (a + c <= b) || (b + c <= a)) printf("Khong phai tam giac");
    else printf("%.6lf\n", s);
    return 0;
}
