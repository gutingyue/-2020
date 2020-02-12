#include <stdio.h>
#include <Windows.h>

void toLowerCase(char str[]){
	char* i = str;
	for (; *i != '\0'; i++){
		if ((*i<'Z') && (*i >= 'A')){
			*i += 32;
		}
	}
}
int main(){
	char arr[] = "Holle";
	int num = sizeof(arr);
	toLowerCase(arr);
	int i = 0;
	for (; i<=num; i++){
		printf("%c",arr[i]);
	}
	system("qause");
	return 0;
}