#include<stdio.h>
#include<Windows.h>
void sortArrayByParity(int* A, int Asize){
	int lift = 0;
	int right = Asize - 1;
	for (; lift<right;){
		if (A[lift] % 2 == 0){
			for (; A[right] % 2 == 0 && lift<right;){
				right--;
			}
			int tem = A[lift];
			A[lift] = A[right];
			A[right] = tem;
		}
		lift++;
	}
}
int main(){
	int A[] = { 1, 3, 4, 5, 6, 8, 7, 9 };
	int Asize = sizeof(A) / sizeof(A[0]);
	sortArrayByParity(A, Asize);
	system("pause");
	return 0;
}