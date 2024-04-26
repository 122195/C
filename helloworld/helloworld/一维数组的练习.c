//#include <stdio.h>
//
//int main() {
//	// 定义一个int型的一维数组，包含10个元素，然后求出数组中的最大值，最小值，总和，平均值，并输出出来。
//	// 判断数组的最大值
//	int arr[] = { 1,2,3,4,5,6,76,7,8,98 };
//	printf("%zu\n", sizeof(arr));
//	int max = arr[0];
//	int length = sizeof(arr) / sizeof(int);
//	for (int i = 1;i<length;i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("最大值是%d\n", max);
//
//	// 判断数组的最小值
//	int min = arr[0];
//	for (int i = 1; i < length; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	printf("最小值是%d\n", min);
//
//	// 求数组的总和
//	int sum = 0;
//	for (int i = 0; i < length; i++) {
//		sum += arr[i];
//	}
//	printf("数组的总和是%d\n", sum);
//
//	// 求平均值
//	int avg = sum / length;
//	printf("平均值是：%d\n", avg);
//}