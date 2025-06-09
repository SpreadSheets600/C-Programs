# Algorithms Summary

## Linear Search

[Full Code](LinearSearch.cpp)

**Description:**  
Linear search is the simplest searching algorithm that checks each element in the array sequentially from the beginning until the target element is found or the end of the array is reached.

It works on both sorted and unsorted arrays. The algorithm starts from the first element and compares it with the target value. If a match is found, it returns the index; otherwise, it moves to the next element.

This process continues until either the element is found or all elements have been checked.

```c
int arr[100] = {1, 5, 2, 9, 10, 19, 10, 19, 100};

int key = 10;
int arr_len = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i <= arr_len; i++) {
    if (arr[i] == key) {
        printf("Element Found At %d\n", i);
    }
}
```

- **Best:** O(1) - Element found at first position  
- **Average:** O(n) - Element found at middle position  
- **Worst:** O(n) - Element at last position or not found  

---

## Binary Search

[Full Code](BinarySearch.cpp)

**Description:**  
Binary search is an efficient searching algorithm that works only on sorted arrays. It uses the divide-and-conquer approach by repeatedly dividing the search space in half.

The algorithm compares the target value with the middle element of the array. If they match, the search is successful.

If the target is smaller than the middle element, the search continues in the left half; if larger, it continues in the right half. This process eliminates half of the remaining elements in each iteration, making it much faster than linear search for large datasets.

```c
int arr[] = {1, 2, 5, 9, 10, 10, 19, 19, 100};

int key = 10;
int start = 0, end = sizeof(arr)/sizeof(arr[0]) - 1;

while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] == key) { /* found */ }
    else if (arr[mid] < key) start = mid + 1;
    else end = mid - 1;
}
```

- **Best:** O(1) - Element found at middle position  
- **Average:** O(log n) - Element found after log n comparisons  
- **Worst:** O(log n) - Element at extreme position or not found  

---

## Bubble Sort

[Full Code](BubbleSort.cpp)

**Description:**  
Bubble sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

The algorithm gets its name because smaller elements "bubble" to the top (beginning) of the list, just like air bubbles rising to the surface of water. In each pass, the largest unsorted element moves to its correct position at the end.

The algorithm continues until no more swaps are needed, indicating the array is sorted. Though easy to understand, it's inefficient for large datasets.

```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - 1 - i; j++)
        if (arr[j] > arr[j + 1]) {

            int temp = arr[j];

            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
```

- **Best:** O(n) - Array already sorted (with optimization)  
- **Average:** O(n²) - Random order array  
- **Worst:** O(n²) - Array sorted in reverse order  

---

## Selection Sort

[Full Code](SelectionSort.cpp)

**Description:**  
Selection sort divides the array into two parts: sorted and unsorted. It repeatedly finds the minimum (or maximum) element from the unsorted portion and places it at the beginning of the unsorted portion, effectively growing the sorted portion by one element.

The algorithm maintains two subarrays: the sorted subarray (initially empty) and the unsorted subarray (initially the entire array). In each iteration, it selects the smallest element from the unsorted subarray and swaps it with the first element of the unsorted subarray.

This process continues until the entire array is sorted.

```c
int arr[] = {64, 25, 12, 22, 11};
int n = sizeof(arr) / sizeof(arr[0]);

for (int i = 0; i < n - 1; i++) {

    int minIdx = i;

    for (int j = i + 1; j < n; j++)
        if (arr[j] < arr[minIdx]) minIdx = j;

    if (minIdx != i) {
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}
```

- **Best:** O(n²) - Even if array is sorted, all comparisons are made  
- **Average:** O(n²) - Random order array  
- **Worst:** O(n²) - Array sorted in reverse order  

---

## Quick Sort

[Full Code](QuicSort.cpp)

**Description:**  
Quick sort is a highly efficient divide-and-conquer sorting algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.

The pivot is placed in its correct sorted position, and the sub-arrays are then recursively sorted. The key operation is the partitioning step, which rearranges the array so that all elements smaller than the pivot come before it, and all elements greater come after it.

This process is repeated until the entire array is sorted.

```c
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

- **Best:** O(n log n) - Pivot divides array into equal halves  
- **Average:** O(n log n) - Random pivot selection  
- **Worst:** O(n²) - Pivot is always smallest/largest element  

---

## Merge Sort

[Full Code](MergeSort.cpp)

**Description:**  
Merge sort is a stable, divide-and-conquer sorting algorithm that divides the array into two halves, recursively sorts each half, and then merges the sorted halves back together.

The algorithm works by continuously dividing the array until each sub-array contains only one element (which is inherently sorted), then merging these single-element arrays back together in sorted order. The merging process compares elements from both halves and places them in the correct order in a temporary array, which is then copied back to the original array.

This guarantees consistent O(n log n) performance regardless of input data.

```c
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

- **Best:** O(n log n) - Array always divided into equal halves  
- **Average:** O(n log n) - Consistent performance  
- **Worst:** O(n log n) - Guaranteed performance regardless of input
