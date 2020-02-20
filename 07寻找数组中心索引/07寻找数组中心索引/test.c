#include<stdio.h>
#include<Windows.h>
//给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。
//我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
//如果数组不存在中心索引，那么我们应该返回 - 1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。
int pivotIndex(int nums[], int numsSize){
	if (numsSize == 0){//若输入为空数组，返回-1
		return -1;
	}
	int lift = 0;
	int right = 0;
	int i = 0;
	for (i = 1; i<numsSize; i++){//先假设nums[0]为中心索引，将右边的值全部相加
		right += nums[i];
	}
	for (i = 0; lift != right&&i<numsSize - 1;){//按顺序循环将一个个值分给左边（假设中心索引右移）
		lift += nums[i];
		i++;
		right -= nums[i];
	}
	if (lift == right){
		return i;
	}
	else{
		return -1;
	}
}
int main(){
	int nums[] = { -1, -1, -1, -1, -1, 0 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret=pivotIndex(nums,numsSize);
	printf("%d\n", ret);
	system("pause");
	return 0;
}