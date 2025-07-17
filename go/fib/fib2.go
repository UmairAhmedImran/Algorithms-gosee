package main

import (
  "fmt"
)

func fib(x int64) int64 {
  if (x <= 1) {
    return x
  }
  arr := make([]int64, x+1)
  arr[0] = 0
  arr[1] = 1
  var i int64
  for  i = 2; i <= x; i++ {
    arr[i] = arr[i - 1] + arr[i - 2]
  }
  return arr[x]
}

func main() {
  result := fib(20)
  fmt.Println(result)
}
// use big int for larger values same logic
