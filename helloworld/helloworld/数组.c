#include <stdio.h>
#include <stdlib.h> 

int main() {
	/*
		����Ķ��岢��ʼ���ĸ�ʽ:
			�������� ������[����] = {����1������2...}
		ϸ��1��
			�������ĳ���û��д������ֵ�ĸ�����������ĳ���
		ϸ��2��
			�������ĳ����Ѿ�д�ϣ�����ֵ�ĸ��� <= ����
			δ��ֵ�Ĳ�����Ĭ��ֵ
			������0
			С����0.0
			�ַ���'\0'
			�ַ�����NULL(ʲô��û��)
	*/
	// ��������洢 �����ֵ
	int arr[] = { 1,2,3,4,5,6 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	size_t size = sizeof(arr) / sizeof(int); // sizeof()���ص����ͱ�׼�������size_t
	//printf("%d\n",size);
	for (int i = 0; i <= size; i++) {
		printf("%d\n",arr[i]);
	}
	// �䳤����
	int length = 10;
	//printf("%d", length);
	// ��ʽ1���ڴ�c99��׼�У�֧�ֱ䳤����
	/*int arr7[length];
	int arr8[length + 5];*/

	// ��ʽ2��ʹ��malloc()��������̬�ķ����ڴ棬����һ��ָ�����ȵ�����(ͨ�õķ�ʽ)
	int *arr9 = (int*)malloc(length * sizeof(int)); // �ڶѿռ俪�ٵ�����ռ�
	arr9[0] = 10;
	arr9[1] = 20;
	printf("%d\n", arr9[1]);
	// ע��㣺ʹ���궯̬�����������һ��Ҫ���մ�������ڴ�ռ䣬���򣬾ʹ����ڴ�й¶
	free(arr9);
	return 0;
}