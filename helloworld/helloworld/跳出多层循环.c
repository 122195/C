//#include <stdio.h>
//
//int main() {
//	// break:只能跳出单层循环
//	// goto：可以跳出多层循环，可以跳到代码中的任意地方，一般只用于跳出循环嵌套
//
//	// 外循环
//	for (int i = 1; i <= 5; i++) {
//		// 内循环
//		for (int j = 1; j <= 5;j++) {
//			printf("内循环执行%d\n", j);
//			//break; // 跳出内循环
//			goto a; // 直接跳出内循环，标记在哪里就直接跳到哪里
//		}
//		printf("内循环结束\n");
//		printf("--------------\n");
//	}
//	a:printf("外循环结束\n");
//}