// VINHLT_CINTRO_MT_P1
#include <stdio.h>

int main() {
  double a, b, c; scanf("%lf%lf%lf", &a, &b, &c);
  if(((a + b) > c) && ((b + c) > a) && ((a + c) > b)) printf("YES"); else printf("NO");
  return 0;
}
