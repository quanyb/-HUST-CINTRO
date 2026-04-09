// IT1108_Bai2_12_Tìm x
#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
  ll n; scanf("%d", &n);
  ll s = 0;
  for(ll i = 1; i <= n; ++i) {
    s += i;
    if(s > n) {
      printf("%d", i - 1);
      break;
    }
  }
  return 0;
}
