// Swap Two Numbers Using Pointers

#include <conio.h>
#include <stdio.h>

int a, b;

void swap(int *x, int *y) {
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  printf("Enter Two Numbers : ");
  scanf("%d %d", &a, &b);

  printf("Before Swapping : A = %d | B = %d\n", a, b);

  swap(&a, &b);

  printf("After swapping : A = %d | B = %d\n", a, b);

  return 0;
}
