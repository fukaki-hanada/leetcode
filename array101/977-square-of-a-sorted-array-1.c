/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int abs(int num);

int* sortedSquares(int* A, int ASize, int* returnSize){
    int *ans = malloc(ASize * sizeof(*A));
    int begin, end;
    begin = 0;  end = ASize-1;  *returnSize = ASize;
    for (int i = ASize-1; i >= 0; --i) {
        if ( abs(A[begin]) > abs(A[end]) ) {
            ans[i] = A[begin] * A[begin];
            ++begin;
        }
        else {
            ans[i] = A[end] * A[end];
            --end;
        }
    }
    return ans;
}

int abs(int num) {
    return (num < 0)? -1*num : num;
}