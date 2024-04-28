//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	// 一方面，字符数组可以看做普通的数组
//	char arr[] = { 'a','b','c','d' };
//	// 另一方面，字符串都被存储在char类型的数组中，字符数组必须以'\0'字符结束，表示一个字符串的结束
//	// 方式1: 标准写法
//	char str1[6] = { 'a','b','c','\0'};
//	// 方式2：简化写法
//	// 自动在末尾添加'\0'字符
//	char str2[12] = { "hello world" }; // 注意使用双引号，非单引号
//	// 或者
//	char str3[12] = "hello world"; // 可以省略一对{}来初始化数组元素
//	//方式3：进一步简化
//	char str4[] = { "hello world" };
//	char str5[] = "hello world";
//	puts(str5); // 用于输出字符串，后面自动添加一个\n
//
//	//字符串对应的字符数组的长度
//	printf("%d\n", sizeof(str4) / sizeof(char)); // 12
//	printf("%d\n",sizeof(str5) / sizeof(char)); // 12
//
//	// 字符串的长度
//	printf("%d\n", strlen(str4));//11
//	printf("%d\n", strlen(str5));//11
//}