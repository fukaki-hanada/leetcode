

int removeDuplicates(int* nums, int numsSize){
    int duplicateSize = 0;
    int j = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] == nums[i-1]) ++duplicateSize;
    }
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == nums[j]) continue;
        nums[++j] = nums[i];        
    }
    return numsSize - duplicateSize;
}