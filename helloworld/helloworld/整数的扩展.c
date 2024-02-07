//#include <stdio.h>
//
//int main()
//{
//	// 1.定义short、int、long、long long四种数据类型的变量
//	// 格式：数据类型 变量名 = 数据值	
//	// short 短整型 windows下占2个字节（-32768~32767）
//	short a = 10;
//	printf("%d\n", a);
//
//	// int 整型 windows下占4个字节（-2147483647~2147483647）
//	int b = 100;
//	printf("%d\n", b);
//
//	// long 长整型 Windows下占4个字节（-2147483647~2147483647）
//	//			   Linux下占8个字节
//	long c = 1000L;
//	printf("%ld\n", c);
//
//	// long long 超长整型 Windows下占8个字节（19位数）
//	long long d = 10000LL;
//	printf("%lld\n", d);
//
//	// 2.有符号整数、无符号整数的定义情况
//	// signed有符号 正数 负数
//	// unsigned 无符号 整数 正数
//	signed int e = -100; // signed 可以省略不写
//	printf("%d\n", e);
//
//	// 定义一个变量表示序号
//	unsigned int f = 999;
//	printf("%u\n", f); // %u表示用unsigned输出无符号
//	return 0;
//}