#include <stdio.h>
int main()
{
  int a[3000006];
    int n; scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int x; scanf("%d", &x);
    if(x == n - 1) {
      for(int i = 0; i < n - 1; ++i) printf("%d ", a[i]);
      return 0;
    }
    if(x < 0 || n < 1 || x == n) {
      printf("Error");
      return 0;
    } else {
      for(int i = 0; i < n; i++) {
        if(x == i) {
          while(1) {
            a[i] = a[i + 1];
            i++;
            if(i == n - 1) break;
          }
        }
      }
    }
    for(int i = 0; i < n - 1; ++i) {
      printf("%d ", a[i]);
    }
    return 0;
}
