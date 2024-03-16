#include <stdio.h>
#include <stdlib.h> // 随机数

int main() {
	// 1. 设置种子，初始值，因为每一个随机数都是通过前一个数字再结合一系列复杂的计算得到的
	srand(1);
	for (int i = 1; i <= 5; i++) {
		// 2. 设置随机数
		int num = rand();
		printf("%d\n", num);
	}
}