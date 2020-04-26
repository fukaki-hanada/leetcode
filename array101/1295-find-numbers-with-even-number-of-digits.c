int findNumbers(int* nums, int numsSize){
    int digit, ans;
    ans = 0;
    for (int i = 0; i < numsSize; ++i) {
        digit = 0;
        while (nums[i]) {
            nums[i] = nums[i] / 10;
            ++digit;
        }
        if (!(digit&0x01)) ++ans;
    }
    return ans;
}