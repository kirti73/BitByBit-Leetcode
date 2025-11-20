int findDuplicate(int* nums, int numsSize) {
    int fast=nums[0],slow=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];}
        while(fast!=slow);
    int slow2=nums[0];
    while(slow!=slow2){
        slow=nums[slow];
        slow2=nums[slow2];
    }
    return slow;
    }
