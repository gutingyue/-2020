#include<stdio.h>
#include<Windows.h>
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
int searchInsert(int* nums, int numsSize, int target){
	int lift = 0;
	int right = numsSize-1;
	if (target <= nums[0]){
		return 0;
	}
	if (target > nums[numsSize - 1]){
		return numsSize;
	}
	for (; lift < right;){
		if (target > nums[(lift+right)/2]){
			lift = ((lift + right) / 2) + 1;
		}
		if (target < nums[(lift + right) / 2]){
			right = ((lift + right) / 2) - 1;
		}
		if (target == nums[(lift + right) / 2]){
			return (lift + right) / 2;
		}
	}
	return ((lift + right) / 2) + 1;
}

int main(){
	int nums[] = { 1, 3, 5, 6};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 2;
	int search = searchInsert(nums, numsSize, target);
	printf("return=%d\n", search);
	system("pause");
	return 0;
}