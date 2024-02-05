#include <stdio.h>

int main()
{
	// 1.定义short、int、long、long long四种数据类型的变量
	// 格式：数据类型 变量名 = 数据值	
	// short 短整型 windows下占2个字节（-32768~32767）
	short a = 10;
	printf("%d\n", a);

	// int 整型 windows下占4个字节（-2147483647~2147483647）
	int b = 100;
	printf("%d\n", b);

	// long 长整型 Windows下占4个字节（-2147483647~2147483647）
	//			   Linux下占8个字节
	long c = 1000L;
	printf("%ld\n", c);

	// long long 超长整型 Windows下占8个字节（19位数）
	long long d = 10000LL;
	printf("%lld\n", d);
	// 2.利用sizeof测量每一种数据类型占用多少字节
	// zu表示打印sizeof的测量结果sizeof(变量名/数据类型)
	// short
	printf("%zu\n", sizeof(short)); // 2个字节
	// int
	printf("%zu\n", sizeof(int)); // 4个字节
	// long
	printf("%zu\n", sizeof(long)); // 4个字节
	// longlong
	printf("%zu\n",sizeof(long long)); // 8个字节

	return 0;
}