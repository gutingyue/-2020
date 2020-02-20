#include<stdio.h>
#include<Windows.h>
int isLongPressedName(char* name, int nameSize, char* typed, int typedSize){
	int n = 0;
	int t = 0;
	int ret = 0;
	for (; n<nameSize;){
		if ((t<typedSize) && name[n] == typed[t]){
			if (n == nameSize - 1){
				return 1;
			}
			t++;
			for (; (t<typedSize) && name[n] == typed[t];){
				if (name[n] == typed[t + 1]){
					break;
				}
				t++;
				ret++;
			}
			n++;
		}
		else{
			return 0;
		}
	}
	return 1;

}

int main(){
	char name[] = { "leelee" };
	int nameSize = sizeof(name) / sizeof(name[0]);
	char typed[] = { "lleeelee" };
	int typedSize = sizeof(typed) / sizeof(typed[0]);
	isLongPressedName(name, nameSize, typed, typedSize);
	system("pause");
	return 0;
}