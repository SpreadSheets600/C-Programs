#include <conio.h>
#include <stdio.h>

int factorial(int num) {

  int product=1;
  for (int i = 1; i <= num; i++) {
    product *= i;
  }

  return product;
}

int main() {
  int num;

  printf("Enter A Number : ");
  scanf("%d", &num);

  printf("The Factorial Of The Number Is : %d\n", factorial(num));

  return 0;
}
