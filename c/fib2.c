#include <stdio.h>
#include <stdlib.h>

unsigned long long fib(int x);

int main() {
  printf("%llu\n", fib(93));
  return 0;
}

unsigned long long fib(int x) {
  if (x == 0) return 0;
  unsigned long long * arr = malloc((x + 1) * sizeof(unsigned long long));
  arr[0] = 0, arr[1] = 1;
  for (int i = 2; i <= x; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  unsigned long long result = arr[x];
  free(arr);
  return result;
}
