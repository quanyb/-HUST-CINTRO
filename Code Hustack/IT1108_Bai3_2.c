#include <stdio.h>
#include <string.h>

int main() {
    long long n; scanf("%ld", &n);
    if(n > 65535) {
        printf("TOO BIG");
        return 0;
    }
    if(n == 0) {
        printf("0");
        return 0;
    }
    char s[100] = "";
    while(n != 0) {
        if(n % 2 == 0) {
            strcat(s, "0");
        }
        if(n % 2 == 1) {
            strcat(s, "1");
        }
        n /= 2;
    }
    // printf("%s\n", s);
    for(int i = strlen(s) - 1; i >= 0; i--)
    printf("%c", s[i]);

    return 0;
}