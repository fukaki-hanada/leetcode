
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int lengthMax = 0, lengthTemp = 0;
    for (int i = 0; i < numsSize; ++i) {
        lengthTemp = (nums[i]) ? lengthTemp + 1 : 0;
        if (lengthMax < lengthTemp) lengthMax = lengthTemp;
    }
    return lengthMax;
}