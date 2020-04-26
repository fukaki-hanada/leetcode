
void swap(int* a, int* b);

int removeElement(int* nums, int numsSize, int val){
    int j = 0;
    for (int i = 0; i < numsSize; ++i) {
        // If the current value is await to be deleted
        // then j is stayed to it until a new value to change it.
        if (nums[i] == val) continue;
        nums[j++] = nums[i];
    }
    // After the iteration, 0th to (j-1)th (j elements in total) are active.
    return j;
}