#include <stdio.h>

int main()

{
	// 格式：关系表达式？表达式1:表达式2;
	/*
		首先计算关系表达式的值
		如果成立，表达式1的值就是运算结果
		如果不成立，表达式2的值就是运算结果
	*/
	// 获取两个变量中的较大值
	// int a = 10;
	// int b = 20;
	// int c = a > b ? a : b;
	// printf("%d\n", c);

	// 获取三个变量中的最大值
	int a = 10;
	int b = 20;
	int c = 30;
	int d = a > b ? a : b;
	int e = d > c ? d : c;
	printf("%d\n", e);
}