// IT1108_Bai2_19-vẽ hình chữ x
#include <stdio.h>
#include <math.h>

int main() {
  int x; scanf("%d", &x);
  for(int i = 1; i <= x; ++i) {
    for(int j = 1; j <= x; ++j) {
      if(i == (x / 2 + 1) && (i == j)) printf("X"); else
      if(i == j) printf("\\"); else
      if(i == (x - j + 1)) printf("/"); else printf("*");
    }
    printf("\n");
  }
  return 0;
}
