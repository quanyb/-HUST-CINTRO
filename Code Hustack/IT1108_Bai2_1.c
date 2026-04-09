// IT1108_Bai2_1_Đếm ước số và tổng ước chia hết 3
#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
  ll n; scanf("%lld", &n);
  if(n <= 0) {
    printf("Error");
    return 0;
  }
  int d = 0, ndiv3 = (n % 3 == 0);
  ll s = 0;
  for(ll i = 1; i <= sqrt(n); ++i) {
    if(n % i == 0) {
      d += 2;
      if(i * i == n) d--;
      if(ndiv3) {
        if(i % 3 == 0 && i % 5 != 0) s += i;
        ll j = n / i;
        if(j != i && j % 3 == 0 && j % 5 != 0) s += j;
      }
    }
  }
  printf("%d\n%lld", d, s);
  return 0;
}
