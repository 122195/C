//#include <stdio.h>
//#include <string.h>
//#define LENGTH 3
//#define ARRAY_SIZE 5
//
//int main() {
//	// 第一种方式：使用循环
//	int arr1[LENGTH] = {1,2,3};
//	// 创建一个与arr1元素类型相同的且长度相同的数组
//	int arr2[LENGTH];
//	// 通过循环的方式，给arr2的各个元素赋值
//	for (int i = 0;i<LENGTH;i++) {
//		arr2[i] = arr1[i];
//	}
//	// 遍历arr2数组
//	for (int i = 0; i < LENGTH; i++) {
//		printf("%d\n",arr2[i]);
//	}
//
//	// 第二种方式：使用memcpy()函数
//	int arr3[ARRAY_SIZE] = { 1,2,3,4,5 }; // 源数组
//	int arr4[ARRAY_SIZE]; // 目标数组
//	// 三个参数依次为：目标数组，源数组以及要复制的字节数
//	memcpy(arr4, arr3, ARRAY_SIZE * sizeof(int));
//
//	for (int i = 0;i<ARRAY_SIZE; i++) {
//		printf("%d\n", arr4[i]);
//	}
//}