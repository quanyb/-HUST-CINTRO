// IT1108_Bai2_15_phân biệt loại số

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n; scanf("%d", &n);
    int even = 0, odd = 0, positive = 0, negative = 0;
    while(n--) {
        int x; scanf("%d", &x);
        if(x % 2 == 0) even++;
        if(x % 2 == 1) odd++;
        if(x > 0) positive++;
        if(x < 0) {
            negative++;
            if((-x) % 2 == 1) odd++;
        }
        if(n == 0) break;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative); 
    return 0;
}