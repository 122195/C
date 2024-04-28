//#include <stdio.h>
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	size_t length = sizeof(arr) / sizeof(int);
//	// 反转
//	for (int i = 0;i<length/2;i++) {
//		// 把第一个数组元素赋值给最后一个
//		int tmpe = arr[i];
//		arr[i] = arr[length - 1 - i];
//		arr[length - 1 - i] = tmpe;
//	}
//
//	// 遍历
//	for (int i = 0;i<length;i++) {
//		printf("%d",arr[i]);
//	}
//}