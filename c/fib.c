#include <stdio.h>

int fib(int x);

int main() {
  int result = fib(2000);
  printf("%d", result);
  return 0;
}

int fib(int x) {
  if (x == 0) return 0;
  if (x == 1) return 1;
  return fib(x - 1) + fib(x - 2);
}
