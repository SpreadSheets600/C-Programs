# Important Programming Problems

## 1. Number of Prime Numbers within a Range

```c
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for(int i=2; i*i<=n; i++)
        if(n%i == 0) return 0;
    return 1;
}

int countPrimes(int start, int end) {
    int count = 0;
    for(int i=start; i<=end; i++)
        if(isPrime(i)) count++;
    return count;
}
```

---

## 2. Fibonacci Series

```c
#include <stdio.h>

void fibonacci(int n) {
    int a=0, b=1, c;
    for(int i=0; i<n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
```

---

## 3. GCD

```c
#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```

---

## 4. LCM

```c
#include <stdio.h>

int lcm(int a, int b) {
    int max = (a > b) ? a : b;
    while(1) {
        if(max%a == 0 && max%b == 0)
            return max;
        max++;
    }
}
```

---

## 5. Matrix Addition

```c
#include <stdio.h>
#define SIZE 3

void matrixAdd(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for(int i=0; i<SIZE; i++)
        for(int j=0; j<SIZE; j++)
            C[i][j] = A[i][j] + B[i][j];
}
```

---

## 6. Matrix Multiplication

```c
#include <stdio.h>
#define SIZE 3

void matrixMultiply(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for(int i=0; i<SIZE; i++)
        for(int j=0; j<SIZE; j++) {
            C[i][j] = 0;
            for(int k=0; k<SIZE; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}
```

---

## 7. Linear Search

```c
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}
```

---

## 8. Binary Search

```c
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int key) {
    if(r >= l) {
        int mid = l + (r - l)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] > key) return binarySearch(arr, l, mid-1, key);
        return binarySearch(arr, mid+1, r, key);
    }
    return -1;
}
```

---

## 9. Factorial

```c
#include <stdio.h>

long factorial(int n) {
    long result = 1;
    for(int i=1; i<=n; i++)
        result *= i;
    return result;
}
```

---

## 10. Krishnamurthy Number

```c
#include <stdio.h>

int isKrishnamurthy(int n) {
    int sum = 0, temp = n;
    while(temp > 0) {
        int digit = temp%10;
        long fact = 1;
        for(int i=1; i<=digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    return sum == n;
}
```

---

## 11. String Reverse

```c
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for(int i=0, j=len-1; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
```

---

## 12. String Matching

```c
#include <string.h>

int stringMatch(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    for(int i=0; i<=n-m; i++) {
        int j;
        for(j=0; j<m; j++)
            if(text[i+j] != pattern[j])
                break;
        if(j == m) return i;
    }
    return -1;
}
```

---

## 13. Array Reverse

```c
void reverseArray(int arr[], int n) {
    for(int i=0, j=n-1; i<j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
```

---

## 14. Swapping using Pointer

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

---

## 15. Factorial using Recursion

```c
#include <stdio.h>

long factorialRec(int n) {
    if(n == 0) return 1;
    return n * factorialRec(n-1);
}
```

---

## 16. Armstrong Number

```c
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = (int)log10(n)+1;
    while(temp > 0) {
        int digit = temp%10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == n;
}
```
