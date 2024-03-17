#include <stdio.h>

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
	int size = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n",size);
	for (int i = 0; i <= 5; i++) {
		printf("%d\n",arr[i]);
	}
	return 0;
}