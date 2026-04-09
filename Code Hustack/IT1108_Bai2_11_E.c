// IT1108_Bai2_11_Tách số
#include <stdio.h>

void xuli() {
    int n; scanf("%d", &n);
    if(n == 0) {
        printf("0"); return;
    }
    int d = 0;
    int a[300006];
    while(n != 0) {
        int x = n % 10;
        n /= 10;
        d++;
        a[d] = x;
        // printf("%d", x);
    }
    for(int i = d; i >= 1; --i) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int test; scanf("%d", &test);
    while(test--) {
        xuli();
    }
    return 0;
}