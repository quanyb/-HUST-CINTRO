// IT1108_Bai2_12_Tổng các số lẻ liên tiếp
#include <stdio.h>

void vani() {
    int x, y, s = 0; scanf("%d%d", &x, &y);
    if(x >= y) {
        int temp = x;
        x = y;
        y = temp;
    }
    for(int i = x + 1; i <= y - 1; ++i) {
        if((i % 2 == 1) || ((-i) % 2 == 1)) {
            s += i;
        }
    }
    printf("%d\n", s);
}

int main() {
    int test; scanf("%d", &test);
    while(test--) {
        vani();
    }
    return 0;
}