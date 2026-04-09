// IT1108_Bai2_14_in bảng nhân
#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    for(int i = 1; i <= 10; ++i) {
        int ans = n * i;
        printf("%d * %d = %d\n", n, i, ans);
    }
    return 0;
}