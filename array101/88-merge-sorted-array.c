

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int length = m+n;
    int a[length];
    int i = 0, p1 = 0, p2 = 0;
    while (i < length) {
        while (p1 < m && p2 < n)
            a[i++] = (nums1[p1] < nums2[p2]) ? nums1[p1++] : nums2[p2++];
        while (p1 < m) a[i++] = nums1[p1++];
        while (p2 < n) a[i++] = nums2[p2++];
    }
    for (int i = 0; i < length; ++i) {
        nums1[i] = a[i];
    }
}

