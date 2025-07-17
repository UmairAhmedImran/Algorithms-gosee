#include <stdio.h>

int fib(int x);

int main() {
  int result = fib(2000);
  printf("%d", result);
  return 0;
}

int fib(int x) {
  if (x == 0) return 0;
  int arr[x];
  arr[0] = 0, arr[1] = 1;
  if (x > 2){
    for (int i = 2; i <= x; i++) {
      arr[i] = arr[i - 1] + arr[i - 2];
    }
  }
  return arr[x];
}
