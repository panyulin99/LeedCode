
bool containsDuplicate(int* nums, int numsSize){
    int i, j, tmp;
    for (i = 1; i < numsSize; i++) {
        tmp = nums[i];
	for (j = i - 1; j >= 0; j--) {
		if (nums[j] == tmp) {
   		    return true;
		} else if (nums[j] < tmp) {
 		    break;
		} else {
		    nums[j + 1] = nums[j];
		}   
	}  
	nums[j + 1] = tmp; 
    }   
    return false;
}
