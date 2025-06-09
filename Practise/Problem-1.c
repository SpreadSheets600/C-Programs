// Swap Two Numbers

#include <conio.h>
#include <stdio.h>

int main() {
  int a, b, temp;

  printf("Enter Two Numbers : ");
  scanf("%d%d", &a, &b);

  printf("Before Swapping : A = %d | B = %d\n", a, b);

  temp = a;
  a = b;
  a = temp;

  printf("After Swapping : A = %d | B = %d\n", a, b);

  return 0;
}
