// IT1108_Bai1_3_Tính chu vi diện tích hình tròn

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    double r; scanf("%lf", &r);
    double pi = 3.14159;
    double M = 2 * pi * r, S = pi * r * r;
    if(r <= 0) printf("ERROR"); else printf("%0.6lf\n%0.6lf", M, S);
    return 0;
}
