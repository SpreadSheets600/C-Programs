#include <conio.h>
#include <cstddef>
#include <stdio.h>

int gdc(int arr[], size_t size) {
  int i, j, gcd = 1;
  for (i = 0; i < size; i++) {
    for (j = i + 1; j < size; j++) {
      if (arr[i] % arr[j] == 0) {
        gcd = arr[j];
      }
    }
  }
  return gcd;
}

int lcm(int arr[], size_t size) {
  int i, j, lcm = 1;
  for (i = 0; i < size; i++) {
    for (j = i + 1; j < size; j++) {
      lcm = lcm * arr[i] / gdc(arr, size);
    }
  }
  return lcm;
}

int main() {
  int n;

  printf("Enter The Number Of Elements : ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter The Elements : \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  size_t size = sizeof(arr) / sizeof(arr[0]);

  printf("The GDC Of The Numbers Is : %d\n", gdc(arr, size));
  printf("The LCM Of The Numbers Is : %d\n", lcm(arr, size));

  return 0;
}
