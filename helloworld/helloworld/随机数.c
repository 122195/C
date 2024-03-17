//#include <stdio.h>
//#include <stdlib.h> // 随机数
//#include <time.h>
//
//int main() {
//	// 1. 设置种子，初始值，因为每一个随机数都是通过前一个数字再结合一系列复杂的计算得到的
//	//srand(1);
//	//for (int i = 1; i <= 5; i++) {
//	//	// 2. 设置随机数
//	//	int num = rand();
//	//	printf("%d\n", num);
//	//}
//	//绝招：用于生成任意范围之内的随机数
//	// 把这个范围变成包头不包尾，包左不包右的 8－50
//	// 拿着尾巴 - 开头 50 - 8 = 42
//	// 修改代码
//	// 12-87
//	srand(time(NULL));
//	int num = rand() % 76 + 12;
//	printf("%d\n", num);
//}