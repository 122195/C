//#include <stdio.h>
//
//int main() {
//	// �������
//	/*for (int i = 1; i <= 5; i++) {
//		printf("%d\n", i);
//	}*/
//
//	// �������
//	/*for (int i = 5; i >= 1; i--) {
//		printf("%d\n", i);
//	}*/
//
//	// 1-5֮��ĺ�
//	/*int num = 0;
//	for (int i = 1; i <= 5; i++) {
//		 num = i + num;
//	}
//	printf("%d\n", num);
//	return 0;*/
//
//	// ��1-100֮���ż���ĺ�
//	/*int sum = 0;
//	for (int i = 1; i<= 100; i++) {
//		if (i%2==0) {
//			sum = sum + i;
//		}
//	}
//	printf("%d\n", sum);*/
//
//	// �����������֣��������������6��8����������
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//	// �ж�num1��num2˭��˭С
//	int min = num1 < num2 ? num1 : num2;
//	int max = num1 > num2 ? num1 : num2;
//	int count = 0;
//	for (int i = min; i <= max; i++) {
//		if (i % 6 == 0 && i % 8 == 0) {
//			count++;
//		}
//	}
//	printf("�ܱ�6����8��������%d��", count);
//}