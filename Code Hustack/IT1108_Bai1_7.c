// IT1108_Bai1_7_Giải phương trình bậc hai nghiệm thực

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double delta = (b * b) - (4 * a * c);
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    if(a == 0 && b != 0 && c != 0) printf("%0.6lf", -c/b); else
    if(a == 0 && b == 0 && c == 0) printf("Phuong trinh vo so nghiem"); else
    if(delta < 0) printf("Phuong trinh vo nghiem");
    else if(delta = 0) printf("%0.6lf\n%0.6lf", x1);
    else {
      if(x1 > x2) printf("%0.6lf\n%0.6lf", x1, x2);
      else printf("%0.6lf\n%0.6lf", x2, x1);
    }
    return 0;
}
