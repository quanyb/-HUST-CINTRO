// IT1108_Bai1_6_Giải phương trình bậc nhất

#include <stdio.h>
#include <math.h>

int main() {
  double a, b; scanf("%lf%lf", &a, &b);
  // y = ax + b
  if(a == 0 && b == 0) printf("Phuong trinh vo so nghiem"); else
  if(a == 0 && b != 0) printf("Phuong trinh vo nghiem"); else
  printf("%0.6lf", -b/a);
  return 0;
}
