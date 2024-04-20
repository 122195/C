#include <stdio.h>
#include <stdlib.h> 

int main() {
	/*
		数组的定义并初始化的格式:
			数据类型 数组名[长度] = {数据1，数据2...}
		细节1：
			如果数组的长度没有写，数据值的个数就是数组的长度
		细节2：
			如果数组的长度已经写上，数据值的个数 <= 长度
			未赋值的部分有默认值
			整数：0
			小数：0.0
			字符：'\0'
			字符串：NULL(什么都没有)
	*/
	// 定义数组存储 五个数值
	int arr[] = { 1,2,3,4,5,6 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	size_t size = sizeof(arr) / sizeof(int); // sizeof()返回的类型标准情况下是size_t
	//printf("%d\n",size);
	for (int i = 0; i <= size; i++) {
		printf("%d\n",arr[i]);
	}
	// 变长数组
	int length = 10;
	//printf("%d", length);
	// 方式1：在从c99标准中，支持变长数组
	/*int arr7[length];
	int arr8[length + 5];*/

	// 方式2：使用malloc()函数，动态的分配内存，创建一个指定长度的数组(通用的方式)
	int *arr9 = (int*)malloc(length * sizeof(int)); // 在堆空间开辟的数组空间
	arr9[0] = 10;
	arr9[1] = 20;
	printf("%d\n", arr9[1]);
	// 注意点：使用完动态创建的数组后，一定要回收此数组的内存空间，否则，就存在内存泄露
	free(arr9);
	return 0;
}