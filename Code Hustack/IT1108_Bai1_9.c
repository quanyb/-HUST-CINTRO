// IT1108_Bai1_9_Tính biểu thức

#include <stdio.h>
#include <math.h>

int main() {
  double x, y; scanf("%lf%lf", &x, &y);
  double s1 = (5 * x * sin(y)) - (3 * y * y * y * x), s2 = 2 * x * x * y + 1 - (x - y);
  if(x <= y) printf("%0.3lf", s1);
  else printf("%0.3lf", s2);
  return 0;
}
