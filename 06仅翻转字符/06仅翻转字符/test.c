#include<stdio.h>
#include<Windows.h>
int ischar(int num){//ÅÐ¶ÏnumÊÇ·ñÎªÓ¢ÎÄ×Ö·û
	if ((num>='A'&&num<='Z') || (num>='a'&&num<='z')){
		return 1;
	}
	else{
		return 0;
	}
}
void reverseOnlyLetters(char* S,int Ssize){
	int lift = 0;
	int right = Ssize-1;
	for (; lift<right;){
		if (ischar(S[lift]) == 1 && ischar(S[right]) == 1){
			int tem = S[lift];
			S[lift] = S[right];
			S[right] = tem;
			lift++;
			right--;
		}
		else if (ischar(S[lift]) == 0 && ischar(S[right]) == 1){
			lift++;
		}
		else if (ischar(S[right]) == 0 && ischar(S[lift]) == 1){
			right--;
		}
		else{
			lift++;
			right--;
		}
	}
}

int main(){
	char S[] = { "ab-cd" };
	int Ssize = sizeof(S) / sizeof(S[0]);
	reverseOnlyLetters(S,Ssize);
	puts(S);
	system("pause");
	return 0;
}