#include<stdio.h>
#include<Windows.h>
//����һ���������͵����� nums�����дһ���ܹ��������顰�����������ķ�����
//���������������������������ģ����������������������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
//������鲻����������������ô����Ӧ�÷��� - 1����������ж��������������ô����Ӧ�÷��������ߵ���һ����
int pivotIndex(int nums[], int numsSize){
	if (numsSize == 0){//������Ϊ�����飬����-1
		return -1;
	}
	int lift = 0;
	int right = 0;
	int i = 0;
	for (i = 1; i<numsSize; i++){//�ȼ���nums[0]Ϊ�������������ұߵ�ֵȫ�����
		right += nums[i];
	}
	for (i = 0; lift != right&&i<numsSize - 1;){//��˳��ѭ����һ����ֵ�ָ���ߣ����������������ƣ�
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