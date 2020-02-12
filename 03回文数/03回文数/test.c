#include<stdio.h>
#include<Windows.h>
#include<math.h>
int isPalindrome(int x){
	if (x<0){
		return 0;
	}
	if (x / 10 == 0){
		return 1;
	}
	if (x % 10 == 0){
		return 0;
	}
	long res = 0;
	int tem = x;
	for (; x > 0;){
		res = 10 * res + x % 10;
		x = x  / 10;
	}
	if (res == tem){
		return 1;
	}
	else{
		return 0;
	}

}
int main(){
	int x = 121;
	int ret=isPalindrome(x);
	printf("%d\n", ret);
	system("pause");
	return 0;
}