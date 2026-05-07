#include <stdio.h>

int merge(int a[], int l, int r, int mid) {
  int n1 = mid - l + 1, n2 = r - mid;
  int L[n1], R[n2];
  for(int i = 0; i < n1; ++i) L[i] = a[l + i];
  for(int j = 0; j < n2; ++j) R[j] = a[mid + 1 + j];
  int i = 0, j = 0, k = l;
  while(i < n1 && j < n2) {
    if(L[i] <= R[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = R[j];
      j++;
    }
    k++;
  }
  while(i < n1) {
    a[k] = L[i];
    i++; k++;
  }
  while(j < n2) {
    a[k] = R[j];
    j++; k++;
  }
}

void mergesort(int a[], int l, int r) {
  if(l >= r) return;
  int mid = l + (r - l) / 2;
  mergesort(a, l, mid);
  mergesort(a, mid + 1, r);
  
  merge(a, l, r, mid);
}

int main()
{
  int a[300006];
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    // int n = sizeof(a) / sizeof(a[0]);
    mergesort(a, 0, n - 1);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
