// IT1108_Bai1_4_Tính giá mua cà chua

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    double ct, kl, t; // ct : chua thue, kl : khoi luong (kg), t : thue
    scanf("%lf%lf%lf", &ct, &kl, &t);
    printf("%lf", (ct * kl) * (1 + (t / 100)));
    return 0;
}
