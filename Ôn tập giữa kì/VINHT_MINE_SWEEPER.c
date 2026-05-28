// VINHT - MINE SWEEPER
#include <stdio.h>
#include <string.h>

char s[306][306], res[306][306];
int a[306][306];

void IsLocalMax(int *n, int *m){
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      if(a[i][j] < 0) {
        a[i - 1][j - 1]++; a[i][j - 1]++; a[i + 1][j - 1]++;
        a[i - 1][j]++; a[i + 1][j]++;
        a[i - 1][j + 1]++; a[i][j + 1]++; a[i + 1][j + 1]++;
      }
    }
  }
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      if(a[i][j] < 0) printf("*"); else printf("%d", a[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n, m; scanf("%d%d", &n, &m);
  for(int i = 1; i <= n; ++i) {
    scanf("%s", &s[i]);
  }
  
  memset(a, 0, sizeof(a));
  
  for(int i = 1; i <= n; ++i) {
    for(int j = 0; j < strlen(s[i]); ++j) {
      if(s[i][j] == '*') a[i][j + 1] = -10;
    }
  }

  IsLocalMax(n, m);
  
  return 0;
}
