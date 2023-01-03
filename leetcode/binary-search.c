int search(int *nums, int numsSize, int target)
{
    if (target > nums[numsSize - 1] || target < nums[0])
        return -1;
    int begin = -1, end = numsSize;
    while (begin < end - 1)
    {
        int half = (begin + end) / 2;
        if (nums[half] < target)
            begin = half;
        else
            end = half;
    }
    if (nums[end] == target)
        return end;
    else
        return -1;
}
