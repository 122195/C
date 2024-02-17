#include <stdio.h>

int main()
{
	// +=
	// 把左边和右边进行相加，结果赋值给左边，对右边没有任何影响
	int a = 20;
	int b = 30;
	a += b; // 等于 a = a + b -= *= /= %= 同理
	printf("%d\n", a);
	printf("%d\n", b);
}