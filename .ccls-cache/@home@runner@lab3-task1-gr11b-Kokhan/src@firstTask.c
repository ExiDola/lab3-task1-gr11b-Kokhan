#include "../include/firstTask.h"
#include <stdio.h>

int isPrime(int num) {
  if (num < 2) {
    return 0;
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

void firstTaskFunc(int a) {
  int first = 2;

  for (int i = 3; i <= a; i++) {
    if (isPrime(i) && isPrime(i - 2)) {
      printf("%d %d\n", i - 2, i);
    }
  }
}
