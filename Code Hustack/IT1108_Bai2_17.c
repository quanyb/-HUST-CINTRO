// IT1108_Bai2_17-tổng chữ số
#include <stdio.h>

int Sod(int u) { // Sum of digit
  int sum = 0;
  while(u != 0) {
    int x = u % 10;
    u /= 10;
    sum += x;
  }
  return sum;
}

int main() {
  int n, a, b; scanf("%d%d%d", &n, &a, &b);
  int s = 0;
  for(int i = 1; i <= n; ++i) {
    if(Sod(i) >= a && Sod(i) <= b) s += i;
  }
  printf("%d", s);
  return 0;
}
