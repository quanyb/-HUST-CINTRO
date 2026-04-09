// IT1108_Bai2_18-tổng các số lẻ liên tiếp
#include <stdio.h>
#include <math.h>

void vani() {
  int x, y; scanf("%d%d", &x, &y);
  int s = 0;
  for(int i = fmin(x + 1, y + 1); i <= fmax(x - 1, y - 1); ++i) if(abs(i) % 2 == 1) s += i;
  printf("%d\n", s);
}

int main() {
  int test; scanf("%d", &test);
  while(test--) {
    vani();
  }
  return 0;
}
