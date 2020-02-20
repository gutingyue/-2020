#include<stdio.h>
#include<Windows.h>
void merge(int* nums1, int m,int* nums2, int n){
	for (; m+n>0;){
		if (m == 0||n>0 && nums1[m - 1] <= nums2[n - 1]){
			nums1[m + n - 1] = nums2[n - 1];
			n--;
		}
		else{
			nums1[m + n - 1] = nums1[m - 1];
			m--;
		}
	}
}
int main(){
	int nums1[] = { 5, 5, 6, 0, 0, 0 };
	int nums2[] = { 3, 2, 2 };
	int m = 3;
	int n = 3;
	merge(nums1, m, nums2, n);
	int i = 0;
	for (; i < n + m ;i++){
		printf("%d ", nums1[i]);
	}
	system("pause");
	return 0;
}