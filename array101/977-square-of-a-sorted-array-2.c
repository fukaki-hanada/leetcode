/* This version of No. 977 is not recommended as it doesn't run quickly */

void quickSort(int* a, int begin, int end);
void selectionSort(int *a, int begin, int end);
void swap(int* a, int* b);
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    int *ans = malloc(ASize * sizeof(*A));
    for (int i = 0; i < ASize; ++i) {
        ans[i] = A[i] * A[i];
    }
    *returnSize = ASize;
    // Sort
    selectionSort(ans, 0, *returnSize - 1);
    // quickSort(ans, 0, *returnSize - 1);
    return ans;
}

void quickSort(int* a, int begin, int end) {
    int left, right, midVal;
    left = begin;
    right = end;
    midVal = a[(begin+end) / 2];
    while (a[left] < midVal && left <= end) ++left;
    while (a[right] > midVal && right >= begin) --right;
    if (left < right) swap(&a[left], &a[right]);
    // Until here, all num. before the left are smaller than midVal
    // all num. after the right are bigger than midVal
    if (begin < right-1) quickSort(a, begin, right-1);
    if (left+1 < end) quickSort(a, left+1, end);
}
void selectionSort(int* a, int begin, int end) {
    int min;
    for (int i = begin; i <= end; ++i) {
        min = i;
        for (int j = i+1; j <= end; ++j) {
            if (a[min] > a[j])  min = j;
        }
        swap(&a[i], &a[min]);
    }
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}