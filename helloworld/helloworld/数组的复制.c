//#include <stdio.h>
//#include <string.h>
//#define LENGTH 3
//#define ARRAY_SIZE 5
//
//int main() {
//	// ��һ�ַ�ʽ��ʹ��ѭ��
//	int arr1[LENGTH] = {1,2,3};
//	// ����һ����arr1Ԫ��������ͬ���ҳ�����ͬ������
//	int arr2[LENGTH];
//	// ͨ��ѭ���ķ�ʽ����arr2�ĸ���Ԫ�ظ�ֵ
//	for (int i = 0;i<LENGTH;i++) {
//		arr2[i] = arr1[i];
//	}
//	// ����arr2����
//	for (int i = 0; i < LENGTH; i++) {
//		printf("%d\n",arr2[i]);
//	}
//
//	// �ڶ��ַ�ʽ��ʹ��memcpy()����
//	int arr3[ARRAY_SIZE] = { 1,2,3,4,5 }; // Դ����
//	int arr4[ARRAY_SIZE]; // Ŀ������
//	// ������������Ϊ��Ŀ�����飬Դ�����Լ�Ҫ���Ƶ��ֽ���
//	memcpy(arr4, arr3, ARRAY_SIZE * sizeof(int));
//
//	for (int i = 0;i<ARRAY_SIZE; i++) {
//		printf("%d\n", arr4[i]);
//	}
//}