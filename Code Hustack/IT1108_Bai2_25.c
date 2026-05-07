#include <stdio.h>

int main()
{
  int n; scanf("%d", &n);
  int i = 0;
  while((n % 10) == 0) {
    if(n % 10 == 0) n /= 10;
  }
  // printf("%d\n",n);
  while(n != 0) {
    int x = n % 10;
    n /= 10;
    printf("%d", x);
  } 
  return 0; 
}
