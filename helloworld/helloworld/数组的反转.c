//#include <stdio.h>
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	size_t length = sizeof(arr) / sizeof(int);
//	// ��ת
//	for (int i = 0;i<length/2;i++) {
//		// �ѵ�һ������Ԫ�ظ�ֵ�����һ��
//		int tmpe = arr[i];
//		arr[i] = arr[length - 1 - i];
//		arr[length - 1 - i] = tmpe;
//	}
//
//	// ����
//	for (int i = 0;i<length;i++) {
//		printf("%d",arr[i]);
//	}
//}