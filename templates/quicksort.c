#include <stdio.h>

void swap(int *a, int *b);

int partition(int a[], int l, int h) { // low & high
  int pivot = a[h];
  int i = l - 1;
  for(int j = l; j < h; j++)
    if(a[j] < pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  swap(&a[i + 1], &a[h]);
  return i + 1;
}

void quicksort(int a[], int l, int h) {
  if(l < h) {
    int pi = partition(a, l, h);
    quicksort(a, l, pi - 1);
    quicksort(a, pi + 1, h);
  }
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main()
{
  int a[300006];
  int n; scanf("%d", &n);
  for(int i = 0; i < n; i++) scanf("%d", &a[i]);
  // int n = sizeof(arr) / sizeof(arr[0]);
  quicksort(a, 0, n - 1);
  for(int i = 0; i < n; i++) printf("%d ", a[i]);
  return 0; 
}
