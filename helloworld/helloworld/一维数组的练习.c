//#include <stdio.h>
//
//int main() {
//	// ����һ��int�͵�һά���飬����10��Ԫ�أ�Ȼ����������е����ֵ����Сֵ���ܺͣ�ƽ��ֵ�������������
//	// �ж���������ֵ
//	int arr[] = { 1,2,3,4,5,6,76,7,8,98 };
//	printf("%zu\n", sizeof(arr));
//	int max = arr[0];
//	int length = sizeof(arr) / sizeof(int);
//	for (int i = 1;i<length;i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("���ֵ��%d\n", max);
//
//	// �ж��������Сֵ
//	int min = arr[0];
//	for (int i = 1; i < length; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	printf("��Сֵ��%d\n", min);
//
//	// ��������ܺ�
//	int sum = 0;
//	for (int i = 0; i < length; i++) {
//		sum += arr[i];
//	}
//	printf("������ܺ���%d\n", sum);
//
//	// ��ƽ��ֵ
//	int avg = sum / length;
//	printf("ƽ��ֵ�ǣ�%d\n", avg);
//}