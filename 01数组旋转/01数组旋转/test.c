#include <stdio.h>
#include <Windows.h>

void rotate(int* nums, int len, int k){
	k = k%len;
	if (k == 0){
		return;
	}
	int i = 0;//逆序k之前的数字
	for (; i < ((len - k)/ 2); i++){
		int tem = 0;
		tem = nums[i];
		nums[i] = nums[len-k-i-1];
		nums[len - k - i - 1] = tem;
	}
	int j = 0;//逆序k之后的数字
	for (; j < (k / 2); j++){      // 012345  
		int tem = 0;                         // 345012    k=2
		tem = nums[len-k + j];
		nums[len-k + j] = nums[len -1- j];
		nums[len -1- j] = tem;
	}
	int h = 0;
	for (; h < (len / 2); h++){
		int tem = 0;
		tem = nums[h];
		nums[h] = nums[len - 1-h];
		nums[len -1- h] = tem;
	}
	printf("%d,%d,%d\n", i, j, h);
}


int main(){
	int nums[] = { 0, 1, 2, 3, 4 };//10432,23410
	int len = sizeof(nums) / sizeof(nums[0]);
	int k = 0;
	printf("输入k:");
	scanf_s("%d", &k);
	rotate(nums, len, k);
	int i = 0;
	for (; i < len; i++){
		printf("%d", nums[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}