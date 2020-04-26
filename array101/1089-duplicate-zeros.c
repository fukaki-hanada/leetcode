

void duplicateZeros(int* arr, int arrSize){
    int a[arrSize];
    int i = 0, j = 0;
    while (i < arrSize) {
        a[i] = arr[j];
        if (arr[j] == 0 && i < arrSize-1) {
            a[++i] = 0;
        }
        ++i; ++j;
    }
    for (i = 0; i < arrSize; ++i) {
        arr[i] = a[i];
    }
}

