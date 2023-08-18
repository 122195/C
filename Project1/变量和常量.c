#define _CRT_SECURE_NO_WARNINGS //执行scanf函数要把这行代码写到文件的第一行
// 变量分为：局部变量和全局变量
// {}大括号内部定义的变量 = 局部变量
// {}大括号外部定义的变量 = 全局变量
// 当全局变量和局部变量名字相同的情况下，局部优先
#include <stdio.h>
//int b = 10; // 全局变量
int main() {
	//short age = 20; // 年龄
	//int height = 180; // 身高
	//float weight = 70; // 体重
	//int a = 20; // 局部变量

	// 写一个代码，计算2个整数的和
	// scanf 是一个输入函数
	int num1 = 0;
	int num2 = 0;

	// 输入2个整数
	scanf("%d %d", &num1, &num2);
	// 求和
	int sum = num1 + num2;
	// 输出
	printf("%d\n", sum);
	return 0;
}