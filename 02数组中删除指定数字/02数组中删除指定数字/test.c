#include <stdio.h>
#include <Windows.h>

int removeElement(int* nums, int numsSize, int val){
	int up = 0;
	int down = 0;
	for (; up < numsSize; up++){
		down = up + 1;
		if ((nums[up] == val)&&(down<(numsSize-1))){
			for (; nums[down] == val;){
				if (down>(numsSize-2)){
					return up;
				}
				down++;
			}
			nums[up] = nums[down];
			nums[down] = val;
		}
	}
	return up;
}


int main(){
	int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int val = 2;
	int newSize = removeElement(nums, numsSize, val);
	printf("newSize:%d \n", newSize);
	int i = 0;
	for (; i < newSize; i++){
		printf("%d ", nums[i]);
	}
	system("pause");
	return 0;
}