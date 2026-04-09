// IT1108_Bai1_5_Tính biểu thức đơn giản

#include <stdio.h>
#include <math.h>

int main() {
  double x, y;
  scanf("%lf%lf", &x, &y);
  double A = x * x + y * y, B = (x + y) * (x + y), C = (x - y) * (x - y);
  printf("%0.6lf\n%0.6lf\n%0.6lf", A, B, C);
    
}
