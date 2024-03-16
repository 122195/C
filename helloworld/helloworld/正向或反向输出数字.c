//#include <stdio.h>
//
//int main() {
//	// 正向输出
//	/*for (int i = 1; i <= 5; i++) {
//		printf("%d\n", i);
//	}*/
//
//	// 反向输出
//	/*for (int i = 5; i >= 1; i--) {
//		printf("%d\n", i);
//	}*/
//
//	// 1-5之间的和
//	/*int num = 0;
//	for (int i = 1; i <= 5; i++) {
//		 num = i + num;
//	}
//	printf("%d\n", num);
//	return 0;*/
//
//	// 求1-100之间的偶数的和
//	/*int sum = 0;
//	for (int i = 1; i<= 100; i++) {
//		if (i%2==0) {
//			sum = sum + i;
//		}
//	}
//	printf("%d\n", sum);*/
//
//	// 输入两个数字，可以输出几个被6或8整除的数字
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//	// 判断num1和num2谁大谁小
//	int min = num1 < num2 ? num1 : num2;
//	int max = num1 > num2 ? num1 : num2;
//	int count = 0;
//	for (int i = min; i <= max; i++) {
//		if (i % 6 == 0 && i % 8 == 0) {
//			count++;
//		}
//	}
//	printf("能被6或者8整除的有%d个", count);
//}